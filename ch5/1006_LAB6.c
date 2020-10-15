# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	printf("성적 입력을 종료하려면 음수를 입력하시오\n");

	int score, res = 0, cnt = 0;

	while (1) {
		printf("성적을 입력하시오: ");
		scanf("%d", &score);

		if (score < 0)
			break;

		res += score;
		cnt++;

	}

	float avg = res / cnt;
	printf("성적의 평균은 %f입니다.", avg);

}