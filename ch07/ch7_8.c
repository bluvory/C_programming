# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int a, b, c, d, e;
	int per;
	double arr[5];

	printf("상품가 5개를 입력하세요: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	arr[0] = a;  arr[1] = b;
	arr[2] = c;  arr[3] = d;  arr[4] = e;

	printf("할인율(%%)? ");
	scanf("%d", &per);

	for (int i = 0; i < 5; i++) {
		printf("가격:%5.lf --> 할인가:%5.lf\n", arr[i], arr[i] - arr[i] * per/100);
	}
}