# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n, cnt = 0, res=0;

	while (cnt <= 5) {
		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &n);
		res += n;
		cnt++;

		if (cnt == 5)
			break;
	}

	printf("�հ�� %d�Դϴ�.", res);
}