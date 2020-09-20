
// 두 수를 각각 8진수, 16진수로 입력받아 10진수로 나타내고
// 큰 수를 구하는 프로그램을 작성하시오

# include <stdio.h>
# pragma warning(disable:4996)

int main(void) {

	int a, b, max;

	printf("두 개의 정수 입력: ");
	scanf("%o %x", &a, &b);

	printf("입력된 정수의 10진수 출력: ");
	printf("%d %d", a, b);

	max = a > b ? a : b;
	printf("\n%d와 %d 중에서 큰 수는 %d이다", a, b, max);

}