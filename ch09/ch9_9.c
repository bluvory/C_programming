# include <stdio.h>
# include <string.h>

int main(void) {

	char str[20];
	while (1) {
		printf("ID? ");
		gets(str);

		if (strlen(str) < 8)
			printf("ID�� 8�� �̻��̾���մϴ�.\n");
		else if (!('a' <= str[0] && str[0] <='z' || 'A'<=str[0] && str[0] <='Z'))
			printf("ID�� �����ڷ� �����ؾ��մϴ�.\n");
		else {
			printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n", str);
			break;
		}
	}
}