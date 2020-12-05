# include <stdio.h>
# include <string.h>
# pragma warning (disable:4996)

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

	char str[20];
	int key;
	char a, b;

	printf("문자열? ");
	gets(str);
	int len = strlen(str);

	while (1) {
		printf("이동할 글자수? ");
		scanf("%d", &key);

		if (key == 0)
			break;

		for (int i = 0; i < len - key; i++)
			reverse_str(str);
		
		for (int i = 20 - key; i < len; i++)
			reverse_str(str);

		for (int i = 0; i < len; i++)
			reverse_str(str);

		printf("%s\n", str);

	}

}