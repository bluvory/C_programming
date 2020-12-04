# include <stdio.h>
# pragma warning (disable:4996)

void fill_arr(int(*arr)[5], int n) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = n;
		}
	}
}

int main(void) {

	int arr[3][5];
	int* p = arr;
	int n;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &n);

	fill_arr(p, n);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}