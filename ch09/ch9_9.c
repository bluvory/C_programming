# include <stdio.h>
# include <string.h>

int main(void) {

	char str[20];
	while (1) {
		printf("ID? ");
		gets(str);

		if (strlen(str) < 8)
			printf("ID는 8자 이상이어야합니다.\n");
		else if (!('a' <= str[0] && str[0] <='z' || 'A'<=str[0] && str[0] <='Z'))
			printf("ID는 영문자로 시작해야합니다.\n");
		else {
			printf("%s는 ID로 사용할 수 있습니다.\n", str);
			break;
		}
	}
}