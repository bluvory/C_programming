# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning (disable:4996)

int main(void) {

	srand(time(NULL));
	int num = rand() % 100 + 1;
	int ans, cnt=0;

	while (1) {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &ans);
		cnt++;

		if (ans == num) {
			printf("축하합니다. 시도횟수=%d", cnt);
			break;
		}
		else if (ans > num) printf("제시한 정수가 높습니다.");
		else if (ans < num) printf("제시한 정수가 낮습니다.");
		printf("\n");
		
	}
}