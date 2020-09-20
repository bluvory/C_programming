# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int total, hour, min, sec;

	printf("재생 시간(초) ? ");
	scanf("%d", &total);
	
	hour = total / 3600;
	min = (total - hour*3600) / 60;
	sec = (total - hour*3600) % 60;

	printf("재생 시간은 %d시간 %d분 %d초입니다.", hour, min, sec);

}