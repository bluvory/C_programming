# include <stdio.h>
# pragma warning (disable:4996)

int seq(int* arr, int size, int d) {

	for (int i = 0; i < size; i++) {
		arr[i] = arr[0] + d * i;
	}
}

int main(void) {

	int arr[10];
	int a, d;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("ù ��° ��? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &d);
	arr[0] = a;

	int* p = arr;
	printf("��������: ");
	seq(p, size, d);

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

}