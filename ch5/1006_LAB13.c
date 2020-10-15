# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char ch;

	for (int i = 1; i <= 5; i++) {
		printf("소문자를 입력하시오:");
		scanf(" %c", &ch);
		printf("변환된 대문자는 %c입니다.", ch-32);
		printf("\n");
	}
}