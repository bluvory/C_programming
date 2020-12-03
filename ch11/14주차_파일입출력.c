# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int state;
	FILE* fp;
	char ch;

	// file open
	// r: 입력용 텍스트 파일 열기
	// wb: 출력용 2진 파일 열기
	fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;     // 더 이상 입출력 수행하지 않도록 처리
	}

	ch = getc(fp);
	while (!feof(fp)) {    // fp가 파일의 끝에 다다르면
		putc(ch, stdout);  // fp2는 출력 파일 포인트 (stdout:표준출력스트림)
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