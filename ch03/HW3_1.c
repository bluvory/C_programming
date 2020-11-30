# include <stdio.h>
# pragma warning (disable:4996)
# define use 190

int main(void) {

	int W, monW;

	printf("기본요금? ");
	scanf("%d", &W);

	printf("월 사용량(kWh)? ");
	scanf("%d", &monW);

	W += monW * use;

	printf("전기요금: %d원", W);

}

// 기호 연산자, 산술, 복합대입연산자