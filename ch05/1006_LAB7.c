# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n1, n2, res, a, r;
	printf("�ΰ��� ������ �Է��Ͻÿ�(ū ��, ���� ��): ");
	scanf("%d %d", &n1, &n2);

	if (n1 < n2) {
		a = n1;
		n1 = n2;
		n2 = a;
	}

	while (1) {
		if (n2 == 0) {
			res = n1;
			break;
		}
		r = n1 % n2;
		n1 = n2;
		n2 = r;
	}

	printf("�ִ� ������� %d�Դϴ�", res);

	

}