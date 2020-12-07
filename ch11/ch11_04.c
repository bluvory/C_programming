# include <stdio.h>
# include <string.h>
# include <ctype.h>
# pragma warning (disable:4996)

struct login_info {
	char id[20];
	char passwd[20];
};

int main(void) {

	struct login_info log[4];

	FILE* fp;
	fp = fopen("password.txt", "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}
	memset(log, 0, sizeof(log));
	printf("4개의 로그인 정보를 읽었습니다.\n");
	for (int i = 0; i < 4; i++) {
		fread(&log[i], sizeof(log), 1, fp);
		log[i].id[19] = ' ';
		log[i].passwd[19] = ' ';
	}

	for (int i = 0; i < 4; i++)
		printf("ID: %s\tpasswd: %s\n", log[i].id, log[i].passwd);

	fclose(fp);

	return 0;
}