
// �� ���� ���� 8����, 16������ �Է¹޾� 10������ ��Ÿ����
// ū ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

# include <stdio.h>
# pragma warning(disable:4996)

int main(void) {

	int a, b, max;

	printf("�� ���� ���� �Է�: ");
	scanf("%o %x", &a, &b);

	printf("�Էµ� ������ 10���� ���: ");
	printf("%d %d", a, b);

	max = a > b ? a : b;
	printf("\n%d�� %d �߿��� ū ���� %d�̴�", a, b, max);

}