# include <stdio.h>
# pragma warning (disable:4996)

int getMin(int arr[], int size) {
	int arrmin = 999;
	for (int i = 0; i < size; i++) {
		if (arr[i] < arrmin)
			arrmin = arr[i];
	}
	return arrmin;

}


int main(void){
	int scores[5];
	int size = sizeof(scores) / sizeof(scores[0]);

	//�� ������ ���� ������ �߰�������, scores�� �����͸� �Է¹޾ƾ� �մϴ�.
	int score;

	for (int i = 0; i < size; i++) {
		scanf("%d", &score);
		scores[i] = score;
	}


	// 4. �ּҰ��� ���ϴ� �Լ��� �����
	// scores���� �ּҰ��� ã�Ƽ� main���� ����Ͻÿ�.
	printf("scores�� �ּڰ� : %d\n", getMin(scores, size));  // �Լ���(�迭��, �迭ũ��)
	return 0;
}