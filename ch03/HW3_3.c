# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int total, hour, min, sec;

	printf("��� �ð�(��) ? ");
	scanf("%d", &total);
	
	hour = total / 3600;
	min = (total - hour*3600) / 60;
	sec = (total - hour*3600) % 60;

	printf("��� �ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);

}