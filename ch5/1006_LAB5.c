# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n, res = 0;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &n);
		res += n;

		if (n == 0)
			break;
	}

	printf("���ڵ��� �� = %d", res);
}