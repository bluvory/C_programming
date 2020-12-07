# include <stdio.h>
# include <ctype.h>
# pragma warning (disable:4996)

int main(void) {

	char name[20];
	printf("ÆÄÀÏ¸í? ");
	gets(name);

	FILE* fp;
	fp = fopen(name, "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	char ch = getc(fp);

	while (!feof(fp)) {
		putc(tolower(ch), stdout);
		ch = getc(fp);
	}

	int state = fclose(fp);

	return 0;
}