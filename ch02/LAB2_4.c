# define RATE 1170.3
# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int dollars;
	double won;

	printf("Enter the dollars : ");
	scanf("%d", &dollars);

	won = dollars * RATE;

	printf("%d �޷��� ��ȭ�� %.1f ���̴�.", dollars, won);


}