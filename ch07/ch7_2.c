// 7�� ��������2

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10], n, r;
	printf("ù ��° ��? ");
	scanf("%d", &n);
	printf("����? ");
	scanf("%d", &r);

	int rr = 1;
	for (int i = 0; i < 10; i++) {
		arr[i] = n * rr;
		rr *= r;
		printf("%d ", arr[i]);
	}

}