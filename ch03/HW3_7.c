# include <stdio.h>
# define MAX 1000
# define MIN 0

int main(void) {
	int x = 10;
	int y = 20;

	// MAX = 2000;

	x = MAX - 1;
	y = MAX - 2;
	printf("range: %d ~ %d \n", MIN, MAX);
}