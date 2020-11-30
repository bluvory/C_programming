# define RATE 1170.3
# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int dollars;
	double won;

	printf("Enter the dollars : ");
	scanf("%d", &dollars);

	won = dollars * RATE;

	printf("%d 달러는 원화로 %.1f 원이다.", dollars, won);


}