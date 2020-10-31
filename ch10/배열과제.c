#include <stdio.h>
# pragma warning (disable:4996)

int main() {

	int num[] = { 1, 10, 5, 67, 3, 71, 23, 4, 5, 9 };
	int scores[5];

	// 1. 배열 num의 있는 값 중에서 짝수만 뽑아서 합을 구해 출력하시오.
	printf("\n1번 ");
	int size1 = sizeof(num) / sizeof(num[0]);
	int sum1 = 0;

	for (int i = 0; i < size1; i++) {
		if (num[i] % 2 == 0)
			sum1 += num[i];
	}
	printf("짝수의 합: %d", sum1);


	// 2. scores 배열에 5개의 데이터를 입력받아
	// 그 중에서 최소값을 구해 출력하시오.
	printf("\n2번 ");
	int size2 = sizeof(scores) / sizeof(scores[0]);
	int score;
	int minarr = 999;

	for (int i = 0; i < size2; i++) {
		scanf("%d", &score);
		scores[i] = score;
		if (score < minarr) minarr = score;
	}
	printf("최솟값: %d", minarr);


	//3. 배열 num에 있는 값을 역순으로 출력하시오.
	printf("\n3번 ");
	for (int i = size1 - 1; i >= 0; i--) {
		printf("%d ", num[i]);
	}

	return 0;
}