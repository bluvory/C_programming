# include <stdio.h>
# pragma warning (disable:4996)

int get_gcf(int a, int b) {

	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void) {
	int a, b;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	if (a < b) {
		int c;
		c = a;
		a = b;
		b = c;
	}

	int res = get_gcf(a, b);
	printf("최대공약수: %d", res);
}
