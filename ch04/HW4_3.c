# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int year;

	printf("Enter the year :");
	scanf("%d", &year);

	if (year % 4 == 0 || year % 100 != 0) {
		printf("%d���� �����̴�", year);
		printf("2 ���� 29 ���̴�.");
	}
	
	else {
		printf("%d���� ������ �ƴϴ�", year);
		printf("2 ���� 28 ���̴�.");
	}

}