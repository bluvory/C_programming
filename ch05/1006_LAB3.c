# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	// 1���� n���� ���� ���ϴ� ���α׷�
	int n1, res1=0;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n1);
	for (int i = 1; i <= n1; i++)
		res1 += i;
	printf("1���� %d������ ���� %d�Դϴ�.\n\n", n1, res1);


	// 1���� n������ ���� ���ϴ� ���α׷�
	int n2, res2=0;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n2);
	for (int i = 1; i <= n2; i++)
		if (i%2==0) res2 += i;
	printf("1���� %d������ ¦������ %d�Դϴ�.", n2, res2);

}