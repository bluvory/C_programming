# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int y;

	printf("Enter the year ");
	scanf("%d", &y);

	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		printf("%d is leapyear", y);
	else printf("%d is not leap year", y);

}