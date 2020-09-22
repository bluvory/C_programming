# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int year;

	printf("Enter the year :");
	scanf("%d", &year);

	if (year % 4 == 0 || year % 100 != 0) {
		printf("%d년은 윤년이다", year);
		printf("2 월이 29 일이다.");
	}
	
	else {
		printf("%d년은 윤년이 아니다", year);
		printf("2 월이 28 일이다.");
	}

}