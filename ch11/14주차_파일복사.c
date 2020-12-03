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
	while (!feof(fp)) {    // fp�� ������ ���� �ٴٸ���
		putc(ch, stdout);  // fp2�� ��� ���� ����Ʈ (stdout:ǥ����½�Ʈ��)
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