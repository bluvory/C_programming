// 교재 184쪽 9번

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n1, n2;

	printf("양의 정수? ");
	scanf("%d", &n1);
	printf("배수의 개수? ");
	scanf("%d", &n2);

	for (int i = 1; i < n2+1; i++)
		printf("%d ", n1*i);
}
