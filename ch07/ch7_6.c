# include <stdio.h>
# pragma warning (disable:4996)

int full_arr(int arr[], int size, int key) {

	for (int i = 0; i < size; i++)
		arr[i] = key;
}

int main(void) {

	int arr[20];
	int key;
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &key);

	full_arr(arr, size, key);

	for (int i = 0; i < 20; i++)
		printf("%d ", arr[i]);
}