# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int a, b, max;

	printf("ù��° ���� �Է��Ͻÿ� : ");
	scanf("%d", &a);

	printf("�ι�° ���� �Է��Ͻÿ� : ");
	scanf("%d", &b);

	max = a > b ? a : b;

	printf("%d�� %d �߿��� ū ���� %d�̴�", a, b, max);

}