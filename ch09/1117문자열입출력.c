# include <stdio.h>
# include <string.h>
# include <ctype.h>
# pragma warning (disable:4996)

int main(void) {

	char s[10];
	printf("���ڿ�? ");
	gets_s(s, sizeof(s));

	int str = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (isalpha(s[i])) {
			str++;
			if (islower(s[i])) toupper(s[i]);
			if (isupper(s[i])) tolower(s[i]);
		}
	}

	printf("���ڿ��� ����: %d\n", str);
	printf("��ҹ��� ����: %s\n", s);
		
	
	// getchar();
	// putchar(c)
	// scanf : ������ ������������ ������
	// gets : ������� �о��


}