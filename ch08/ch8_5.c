# include <stdio.h>


void get_min_max(int *p, int size) {

	int max = *p;
	int min = *p;

	for (int i = 0; i < size; i++) {
		if (max < *p)
			max = *p;
		if (min > * p)
			min = *p;
		*p++;
	}

	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);

}

int main(void) {

	int arr[10] = { 23,45,62,12,99,83,23,50,72,37 };
	
	printf("�迭: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	get_min_max(arr, 10);

}