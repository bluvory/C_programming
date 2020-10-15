// 교재 184쪽 11번

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num;
	int cnt=0;

	printf("양의 정수? ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cnt++;
	}

	if (cnt == 2) printf("%d는 소수입니다.", num);
	else printf("%d는 소수가 아닙니다.", num);

}