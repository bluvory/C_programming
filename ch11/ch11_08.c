# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int key;
	char fname[20];
	printf("복호화할 파일? ");
	gets(fname);
	printf("복호 키? ");
	scanf("%d", &key);

	FILE* fp;
	fp = fopen("cipher.txt", "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	char ch = getc(fp);
	while (!feof(fp)) {
		putc(ch + key, stdout);
		ch = getc(fp);
	}

	fclose(fp);


}