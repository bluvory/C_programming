# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	printf("==================\n");
	printf("    n     nÀÇÁ¦°ö\n");
	printf("==================\n");

	int i = 1;
	while (i<=10) {
		printf("    %d    %d\n", i, i*i);
		i++;
	}
}