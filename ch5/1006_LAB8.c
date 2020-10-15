# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	// 팩토리얼 계산 예제 (for 버전)
	int n1, res1 = 1;
	printf("정수를 입력하시오: ");
	scanf("%d", &n1);
	for (int i = 1; i <= n1; i++)
		res1 *= i;
	printf("%d!은 %d입니다.\n\n", n1, res1);

	// 팩토리얼 계산 예제 (while 버전)
	int n2, res2 = 1;
	printf("정수를 입력하시오: ");
	scanf("%d", &n2);
	int i = 1;
	while (i <= n1) {
		res2 *= i;
		i++;
	}
	printf("%d!은 %d입니다.", n2, res2);

}