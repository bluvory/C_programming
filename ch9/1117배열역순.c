# include <stdio.h>
# include <string.h>
# pragma warning (disable:4996)

// �������� �޾Ƽ� �ٽ� ��������� ���ڿ� ��

int main(void) {

	char s1[6] = "apple";
	char s2[6] = "elppa";
	char s3[6];
	int n = strlen(s1);
	;
	for (int i = 0; i < n ; i++) {
		s3[i] = s2[n - i - 1];
	}
	s3[5] = '\0';

	/*
	for (int i = n - 1; i > 0; i--) {
		s2[n - i - 1] = s3[i];
	}
	*/

	if (strcmp(s1, s3) == 0)
		printf("s1�� s2 ���� ����\n");
	else
		printf("s1�� s2 ���� �ٸ�\n");

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s2����: %s\n", s3);

}