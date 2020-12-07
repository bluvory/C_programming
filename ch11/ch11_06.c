# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char fname1[20], fname2[20];
	printf("원본 파일? ");
	scanf("%s", fname1);
	printf("타켓 파일? ");
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
	
	if (res == 1) printf("두 파일이 같습니다.");
	else if (res == 2) printf("두 파일이 다릅니다.");
	fclose(fp1);
	fclose(fp2);
	

}