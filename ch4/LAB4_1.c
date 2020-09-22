# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	int num;

	printf("Enter the number:");
	scanf("%d", &num);

	if (num < 0)
		printf("%d\n", -num);

	printf("END");
}