# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	FILE* fp;
	fp = fopen("password.txt", "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	printf("4개의 로그인 정보를 읽었습니다.");
	char id;
	char passwd;

	while (1) {

		printf("ID? ");
		gets(id);
	}

}