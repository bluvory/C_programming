# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num;
	printf("����ϰ� ���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		printf("%d * %d = %d\n", num, i, num * i);
}