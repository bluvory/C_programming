# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int key;
	char txt[20];
	printf("암호 키? ");
	scanf("%d", &key);
	while (getchar() != '\n');
	printf("암호화할 텍스트? ");
	gets(txt);

	int len = strlen(txt);
	for (int i = 0; i < len; i++)
		txt[i] += key;

	FILE* fp;
 	fp = fopen("cipher.txt", "w+");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fwrite(txt, len, 1, fp);

	fclose(fp);


}