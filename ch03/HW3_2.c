# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int a, b, max;

	printf("첫번째 수를 입력하시오 : ");
	scanf("%d", &a);

	printf("두번째 수를 입력하시오 : ");
	scanf("%d", &b);

	max = a > b ? a : b;

	printf("%d와 %d 중에서 큰 수는 %d이다", a, b, max);

}