# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int price, dis;

	printf("��ǰ�� ����? ");
	scanf("%d", &price);

	printf("������(%%)? ");
	scanf("%d", &dis);

	printf("%d�� ���εǾ����ϴ�.\n", price*dis/100);

	printf("���ΰ�: %d", price - price*dis/100);

}