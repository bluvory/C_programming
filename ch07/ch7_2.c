# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10];
	int n, r;
	int rr = 1;

	printf("첫 번째 항? ");
	scanf("%d", &n);
	printf("공비? ");
	scanf("%d", &r);

	for (int i = 0; i < 10; i++) {
		arr[i] = n * rr;
		rr *= r;
	}

	printf("등비수열: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}