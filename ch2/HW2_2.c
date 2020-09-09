# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int hour, min, sec, total;

	printf("시, 분, 초를 입력하시오 : ");
	scanf("%d %d %d", &hour, &min, &sec);

	total = hour * 3600 + min * 60 + sec;
	printf("Total %d seconds", total);

}