# include <stdio.h>
# include <string.h>

char reverse_str(char* str) {

	char tmp;
	int len = strlen(str);
	for (int i = 0; str[i] != '\0'; i++) {

		tmp = str[len - i - 1];
		str[len - i - 1] = str[i];
		str[i] = tmp;

		if (i == len / 2 - 1)
			break;
	}
	return str;
}

int main(void) {

	char str[100];
	printf("���ڿ�? ");
	gets(str);

	reverse_str(str);
	printf("�������� �� ���ڿ�: %s", str);
}