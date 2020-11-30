# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n, res = 0;

	while (1) {
		printf("점수를 입력하시오: ");
		scanf("%d", &n);
		res += n;

		if (n == 0)
			break;
	}

	printf("숫자들의 합 = %d", res);
}