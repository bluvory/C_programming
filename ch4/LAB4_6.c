# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("���� ����");
		break;
	case 2:
		printf("���� ����");
		break;
	case 3:
		printf("���� ����");
		break;
	case 4:
		printf("���� �μ�");
		break;
	default:
		printf("Invalid number");
		break;
	}

}