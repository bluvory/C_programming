# include <stdio.h>
# pragma warning (disable:4996)

// data.txt -> data.out
int main(void) {

	int state;
	FILE* fp;
	FILE* fp2;
	char ch;

	// file open
	fp = fopen("hello.txt", "rt");
	fp2 = fopen("hello.out", "wt");

	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}

	// use file
	ch = getc(fp);
	while (!feof(fp)) {    // fp가 파일의 끝에 다다르면
		putc(ch, stdout);  // fp2는 출력 파일 포인트 (stdout:표준출력스트림)
		fputc(ch, fp2);
		ch = getc(fp);
	}

	// file close
	state = fclose(fp);
	/*
	if (state != 0) {
		printf("file close error");
		return 1;
	}
	*/

	return 0;
}