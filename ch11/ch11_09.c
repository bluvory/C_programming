# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char fname[20];
	printf("���ϸ�? ");
	gets(fname);

	srand(time(NULL));
	int num[1000];
	for (int i = 0; i < 1000; i++)
		num[i] = rand() % 1000;

	FILE* fp1, *fp2;
	fp1 = fopen("test.dat", "w+");
	if (fp1 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fp2 = fopen("test.dat", "wb");
	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}

	fwrite(num, 1000, 1, fp1);
	fwrite(num, 1000, 1, fp2);

	printf("test.txt.�� test.dat�� �����߽��ϴ�");
	fclose(fp1);
	fclose(fp2);

}