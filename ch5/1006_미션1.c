# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);

	if (num % 2 == 0) printf("%d은 짝수 입니다.", num);
	else printf("%d은 홀수 입니다.", num);
}