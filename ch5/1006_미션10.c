# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	int a, b, c, max, min;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	if ((a > b) && (a > c)) {
		if (b > c) printf("%d %d %d", a, b, c);
		else printf("%d %d %d", a, c, b);
	}

	else if ((b > a) && (b > c)) {
		if (a > c) printf("%d %d %d", b, a, c);
		else printf("%d %d %d", b, c, a);
	}

	else {
		if (a > b) printf("%d %d %d", c, a, b);
		else printf("%d %d %d", c, b, a);
	}
}