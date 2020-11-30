# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	// 1부터 n까지 합을 구하는 프로그램
	int n1, res1=0;
	printf("정수를 입력하시오: ");
	scanf("%d", &n1);
	for (int i = 1; i <= n1; i++)
		res1 += i;
	printf("1부터 %d까지의 합은 %d입니다.\n\n", n1, res1);


	// 1부터 n까지의 합을 구하는 프로그램
	int n2, res2=0;
	printf("정수를 입력하시오: ");
	scanf("%d", &n2);
	for (int i = 1; i <= n2; i++)
		if (i%2==0) res2 += i;
	printf("1부터 %d까지의 짝수합은 %d입니다.", n2, res2);

}