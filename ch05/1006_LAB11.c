# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}