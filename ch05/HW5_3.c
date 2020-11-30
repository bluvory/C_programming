// 교재 184쪽 10번

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	int kwh, total, base, elc;

	while (1) {

		printf("\n월 사용량 (KWh)? ");
		scanf("%d", &kwh);
		if (kwh == 0) break;

		if (kwh <= 300) {
			base = 1000;
			elc = kwh*100;
		}

		else {
			base = 5000;
			elc = kwh*100 + (kwh-300)*200;
		}

		total = base + elc;

		printf("전기 요금 합계: %d", total);
		printf("\n  - 기본요금: %d", base);
		printf("\n- 전력량요금: %d", elc);
	}
}