# include <stdio.h>
# pragma warning (disable:4996)

// 반환하는 형태가 void
void add(int a, int b) {
	int num;
	num = a + b;
	printf("두 수의 합: %d", num);
}

// 반환하는 형태가 int
int add2(int a, int b) {
	int num;
	num = a + b;
	return num;
}


int main(void) {
	int n1, n2;

	printf("Enter the first numer: ");
	scanf("%d", &n1);
	printf("Enter the second number: ");
	scanf("%d", &n2);

	// 덧셈하는 함수를 호출하시오
	add(n1, n2);
	printf("\n");

	int res;
	res = add2(n1, n2);
	printf("두 수의 합: %d", res);

	return 0;
}