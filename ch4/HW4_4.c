# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int temp;

	printf("Enter the temperature: ");
	scanf("%d", &temp);

	if (temp >= 33) {
		printf("���� ���Ǻ��� ��ȿ�Ǿ����ϴ�.");
		printf("\n�ǰ��� �����ϼ���");
		printf("\n���� �µ��� %d�Դϴ�.", temp);
	}
	else
		printf("\n���� �µ��� %d�Դϴ�.", temp);

}