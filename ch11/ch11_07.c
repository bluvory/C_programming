# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int key;
	char txt[20];
	printf("��ȣ Ű? ");
	scanf("%d", &key);
	while (getchar() != '\n');
	printf("��ȣȭ�� �ؽ�Ʈ? ");
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