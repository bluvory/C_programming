# include <stdio.h>
# pragma warning (disable:4996)

int getMAX(int arr[], int size) {
	int max = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int getTOTAL(int arr[], int size) {

	int total = 0;
	for (int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total;
}

int main(void) {

	int score[5];
	int a;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		score[i] = a;
	}

	int size = sizeof(score) / sizeof(score[0]);
	double avg = getTOTAL(score, size) / size;

	printf("Total: %d\n", getTOTAL(score, size));
	printf("Average: %f\n", avg);
	printf("Max: %d", getMAX(score, size));
}