# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	float n1, n2;

	printf("Enter a floating number: ");
	scanf("%f", &n1);
	printf("Enter a floating number: ");
	scanf("%f", &n2);

	if (n1 > n2)
		printf("The smaller number is %.2f", n2);
	else
		printf("The smaller number is %.2f", n1);

	return 0;

}