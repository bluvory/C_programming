# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning (disable:4996)

int main(void) {

	srand(time(NULL));
	int rotto = rand() % 90 + 10;
	int num;

	printf("�� �ڸ� ������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	printf("������ ���� ��ȣ�� %d\n", rotto);

	if (num == rotto)
		printf("���ڿ� ������ ��� ��ġ�ϹǷ�\n1,000,000��");
	else if (num % 10 + num / 10 == rotto)
		printf("���ڰ� ��� ��ġ�ϹǷ�\n300,000��");
	else if ((num%10 == rotto%10) || (num%10==rotto/10) || (num/10 == rotto%10) || (num/10 == rotto/10))
		printf("�ϳ��� ���ڰ� ��ġ�ϹǷ�\n10,000��");
	else
		printf("���ڰ� �ϳ��� ��ġ���� �����Ƿ�\n0��");

}