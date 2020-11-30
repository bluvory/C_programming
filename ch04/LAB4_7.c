# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char op;
	int n1, n2;
	float res;

	printf("Enter an operator: ");
	scanf("%c", &op);
	printf("Enter the first operand: ");
	scanf("%d", &n1);
	printf("Enter the second operand: ");
	scanf("%d", &n2);

	switch (op) {
	case '+':
		res = n1 + n2;
		break;
	case '-':
		res = n1 - n2;
		break;
	case '*':
		res = n1 * n2;
		break;
	case '/':
		res = n1 / n2;
		break;
	}

	printf("%d %c %d = %.2f", n1, op, n2, res);

}