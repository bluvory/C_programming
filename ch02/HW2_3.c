# include <stdio.h>
# pragma warning (disable:4996)
# define RATE 0.3025

int main(void) {

	float area, py;

	printf("����Ʈ�� ������ �������� ������ �Է��Ͻÿ�: ");
	scanf("%f", &area);

	py = area * RATE;
	printf("%.2f �������ʹ� %.2f �� �ش�ȴ�.", area, py);
}