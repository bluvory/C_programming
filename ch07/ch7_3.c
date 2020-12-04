# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	int max = -1;
	int min = 999;

	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	printf("ÃÖ´ñ°ª: %d\n", max);
	printf("ÃÖ¼Ú°ª: %d\n", min);
}