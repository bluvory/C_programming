# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int n, cnt = 0, res=0;

	while (cnt <= 5) {
		printf("값을 입력하시오: ");
		scanf("%d", &n);
		res += n;
		cnt++;

		if (cnt == 5)
			break;
	}

	printf("합계는 %d입니다.", res);
}