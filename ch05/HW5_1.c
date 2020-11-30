// 교재 184쪽 8번

# include <stdio.h>

int main(void) {

	for (int i = 32; i < 127; i++) {
		printf("%c ", i);
		if (i == 55 || i == 79 || i == 103)
			printf("\n");
	}
}