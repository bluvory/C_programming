# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	// ���丮�� ��� ���� (for ����)
	int n1, res1 = 1;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n1);
	for (int i = 1; i <= n1; i++)
		res1 *= i;
	printf("%d!�� %d�Դϴ�.\n\n", n1, res1);

	// ���丮�� ��� ���� (while ����)
	int n2, res2 = 1;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n2);
	int i = 1;
	while (i <= n1) {
		res2 *= i;
		i++;
	}
	printf("%d!�� %d�Դϴ�.", n2, res2);

}