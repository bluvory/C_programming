# include <stdio.h>

int main(void) {

	char str[100];
	int cnt=0;

	printf("���ڿ�? ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++) {
		if ('a' <= str[i] && str[i] <= 'z' || 'A' <= str[i] && str[i] <= 'Z')
			cnt++;
	}
	printf("�������� ����: %d", cnt);
}