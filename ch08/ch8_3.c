# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10] = { 12,54,23,43,87,31,67,92,79,7 };
	int* p = arr;
	int n;

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");
	printf("Á¤¼ö? ");
	scanf("%d", &n);

	for (int i = 0; i < 10; i++) {
		*p += n;
		printf("%d ", arr[i]);
		*p++;
	}


}