# include <stdio.h>
# pragma warning (disable:4996)

// call by reference
void square(int& n1, int& n2) {

	int area = n1 * n2;
	int cul = 2 * (n1 + n2);
	printf("����: %d, �ѷ�: %d", area, cul);
}

int main(void) {

	int a, b;
	printf("����? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &b);

	square(a, b);
}

