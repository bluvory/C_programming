# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("¦���Դϴ�.");
		printf("\n���� %d�Դϴ�", num / 2);
	}

	else {
		printf("Ȧ���Դϴ�.");
		printf("\n�������� %d�Դϴ�.", num % 2);
	}

}