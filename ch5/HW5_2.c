// ���� 184�� 9��

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n1, n2;

	printf("���� ����? ");
	scanf("%d", &n1);
	printf("����� ����? ");
	scanf("%d", &n2);

	for (int i = 1; i < n2+1; i++)
		printf("%d ", n1*i);
}
