# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char fname1[20], fname2[20];
	printf("���� ����? ");
	scanf("%s", fname1);
	printf("Ÿ�� ����? ");
	scanf("%s", fname2);

	FILE* fp1, *fp2;
	fp1 = fopen(fname1, "rt");
	if (fp1 == NULL) {
		printf("file open error!\n");
		return 1;
	}
	fp2 = fopen(fname2, "rt");
	if (fp2 == NULL) {
		printf("file open error!\n");
		return 1;
	}

	char ch1;
	char ch2;
	int res;
	while (!feof(fp1) || !feof(fp2)) {

		ch1 = getc(fp1);
		ch2 = getc(fp2);
		if (ch1 == ch2) {
			res = 1;
			continue;
		}
		else
			res = 2;
	}
	
	if (res == 1) printf("�� ������ �����ϴ�.");
	else if (res == 2) printf("�� ������ �ٸ��ϴ�.");
	fclose(fp1);
	fclose(fp2);
	

}