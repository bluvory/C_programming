# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int a, b, c, d, e;
	int per;
	double arr[5];

	printf("��ǰ�� 5���� �Է��ϼ���: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	arr[0] = a;  arr[1] = b;
	arr[2] = c;  arr[3] = d;  arr[4] = e;

	printf("������(%%)? ");
	scanf("%d", &per);

	for (int i = 0; i < 5; i++) {
		printf("����:%5.lf --> ���ΰ�:%5.lf\n", arr[i], arr[i] - arr[i] * per/100);
	}
}