# include <stdio.h>
# pragma warning (disable:4996)

int add(int a, int b) {
	int res;
	res = a + b;
	return res;
}

int sub(int a, int b) {
	int res;
	res = a - b;
	return res;
}

int mul(int a, int b) {
	int res;
	res = a * b;
	return res;
}

float div(float a, float b) {
	float res;
	res = a / b;
	return res;
}

int main(void) {

	int n1, n2;
	char op;
	printf("Enter exp: ");
	scanf("%d %c %d", &n1, &op, &n2);


	if (op == '+') {
		int res = add(n1, n2);
		printf("두 수의 합: %d\n", res);
	}
	else if (op == '-') {
		int res = sub(n1, n2);
		printf("두 수의 차: %d\n", res);
	}
	else if (op == '*') {
		int res = mul(n1, n2);
		printf("두 수의 곱: %d\n", res);
	}
	else if (op == '/') {
		float res = div(n1, n2);
		printf("두 수의 나눗셈: %f\n", res);
	}

		
}