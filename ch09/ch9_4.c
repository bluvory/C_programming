# include <stdio.h>
# include <ctype.h>

int main(void) {

	char str[100];
	printf("���ڿ�? ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
 			continue;
		}

		else {
			str[i] = tolower(str[i]);
			continue;
		}
	}
	
	printf("��ȯ��: ");
	printf("%s", str);

}