# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n1, n2;
	char op;
	float res;

	printf("������ �Է��Ͻÿ�\n(��:2 + 5)\n");
	scanf("%d %c %d", &n1, &op, &n2);

	switch (op) {
	case '+':
		res = n1 + n2;
		printf("%d %c %d = %f", n1, op, n2, res);
		break;

	case '-':
		res = n1 - n2;
		printf("%d %c %d = %f", n1, op, n2, res);
		break;

	case '*':
		res = n1 * n2;
		printf("%d %c %d = %f", n1, op, n2, res);
		break;

	case '/':
		res = n1 / n2;
		printf("%d %c %d = %f", n1, op, n2, res);
		break;

	}


}