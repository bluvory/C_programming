# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	for (int i = 1; i < 100; i++) {
		for (int j = 1; j < 100; j++) {
			for (int k = 1; k < 100; k++) {
				if ((i * i + j * j == k * k) || (i * i + k * k == j * j) || (j * j + k * k == i * i))
					printf("%d %d %d\n", i, j, k);
			}
		}
	}
}