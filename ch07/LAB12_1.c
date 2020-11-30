# include <stdio.h>
# pragma warning (disable:4996)


int main(void) {

	int score[] = {71, 80, 90, 85, 95};
	int size = sizeof(score) / sizeof(score[0]);
	int total = 0, max = -1;

	for (int i = 0; i < size; i++) {
		total += score[i];
		if (score[i] > max) max = score[i];
	}
	double avg = total / size;
	
	printf("Total: %d\n", total);
	printf("Average: %f\n", avg);
	printf("Max: %d", max);
}