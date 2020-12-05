# include <stdio.h>
# include <ctype.h>

int strcmp_ic(char* lhs, char* rhs) {

	for (int i = 0; lhs[i] != '\0' && rhs[i] != '\0'; i++) {

		if (tolower(lhs[i]) == tolower(rhs[i]))
			continue;
		else if (tolower(lhs[i]) < tolower(rhs[i])) return -1;
		else if (tolower(lhs[i]) > tolower(rhs[i])) return 1;
	}
	
	return 0;

}

int main(void) {

	char str1[20], str2[20], a[20], b[20];
	printf("ù ��° ���ڿ�? ");
	gets(str1);
	printf("�� ��° ���ڿ�? ");
	gets(str2);

	int res = strcmp_ic(str1, str2);
	if (res == 0)
		printf("%s == %s", str1, str2);
	else if (res == -1)
		printf("%s < %s", str1, str2);
	else if (res == 1)
		printf("%s > %s", str1, str2);
}