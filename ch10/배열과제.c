#include <stdio.h>
# pragma warning (disable:4996)

int main() {

	int num[] = { 1, 10, 5, 67, 3, 71, 23, 4, 5, 9 };
	int scores[5];

	// 1. �迭 num�� �ִ� �� �߿��� ¦���� �̾Ƽ� ���� ���� ����Ͻÿ�.
	printf("\n1�� ");
	int size1 = sizeof(num) / sizeof(num[0]);
	int sum1 = 0;

	for (int i = 0; i < size1; i++) {
		if (num[i] % 2 == 0)
			sum1 += num[i];
	}
	printf("¦���� ��: %d", sum1);


	// 2. scores �迭�� 5���� �����͸� �Է¹޾�
	// �� �߿��� �ּҰ��� ���� ����Ͻÿ�.
	printf("\n2�� ");
	int size2 = sizeof(scores) / sizeof(scores[0]);
	int score;
	int minarr = 999;

	for (int i = 0; i < size2; i++) {
		scanf("%d", &score);
		scores[i] = score;
		if (score < minarr) minarr = score;
	}
	printf("�ּڰ�: %d", minarr);


	//3. �迭 num�� �ִ� ���� �������� ����Ͻÿ�.
	printf("\n3�� ");
	for (int i = size1 - 1; i >= 0; i--) {
		printf("%d ", num[i]);
	}

	return 0;
}