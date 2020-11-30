# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int year, mon, day;

	printf("연도를 입력하시오: ");
	scanf("%d", &year);

	printf("월을 입력하시오: ");
	scanf("%d", &mon);

	if ((mon == 4) || (mon == 6) || (mon == 9) || (mon == 11)) day = 30;
	else if (mon == 2) {
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) day = 29;
		else day = 28;
	}
	else day = 31;

	printf("%d년 %d월은 %d일입니다.", year, mon, day);
}