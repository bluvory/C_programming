# include <stdio.h>

int main(void) {

	double x[3];
	double* p = x;

	// �ּ� ������ ������� �ʰ� �ּ� ���ϱ�
	for (int i = 0; i < 3; i++)
		printf("x[%d]�� �ּ�: %p\n", i, p);
}