# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char str[20];
	char code[20];
	int key;

	printf("���ڿ�? ");
	scanf("%s", str);

	printf("��ȣ Ű(����)? ");
	scanf("%d", &key);

	for (int i = 0; i < 20; i++) {
		if (str[i] == '\0')
			code[i] = '\0';
		else if (str[i] + key > 122)
			code[i] = str[i] + key - 26;
		else
			code[i] = str[i] + key;
	}
	printf("��ȣȭ�� ���ڿ�: %s", code);
}