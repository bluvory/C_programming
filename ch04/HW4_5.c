# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char op;
	int n1, n2;
	float res, ans;

	printf("Enter an operator: ");
	scanf("%c", &op);
	printf("Enter the first operand: ");
	scanf("%d", &n1);
	printf("Enter the second operand: ");
	scanf("%d", &n2);

	switch(op) {
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
		default:
			printf("알맞은 수식이 아닙니다.");
			break;
	}

	printf("%d %c %d = ", n1, op, n2);
	scanf("%f", &ans);

	if (ans == res)
		printf("Right answer");
	else {
		printf("Wrong!\n");
		printf("%.2f is the right answer", res);
	}
	
}