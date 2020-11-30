// 교재 184쪽 12번

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num;
	int tc = 0;

	printf("양의 정수? ");
	scanf("%d", &num);

	for (int k = 1; k <= num; k++) {

		int cnt = 0;

		for (int i = 1; i <= k; i++) {
			if (k % i == 0) cnt++;
		}

		if (cnt == 2) {
			printf("%d\t", k);
			tc++;
			if (tc % 10 == 0) printf("\n");
		}

	}

}