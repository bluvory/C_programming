# include <stdio.h>
# include <time.h>

int fill_arr(int* p) {

	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		*p = rand() % 100;
		*p++;
	}

}

int main(void) {

	int arr[10];
	fill_arr(arr);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}