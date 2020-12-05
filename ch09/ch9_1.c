# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char fname[20];
	char ext[5];
	printf("파일명? ");
	scanf("%s", fname);
	printf("확장자? ");
	scanf("%s", ext);

	printf("전체 파일명: %s.%s", fname, ext);
}