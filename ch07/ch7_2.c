// 7장 연습문제2

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10], n, r;
	printf("첫 번째 항? ");
	scanf("%d", &n);
	printf("공비? ");
	scanf("%d", &r);

	int rr = 1;
	for (int i = 0; i < 10; i++) {
		arr[i] = n * rr;
		rr *= r;
		printf("%d ", arr[i]);
	}

}