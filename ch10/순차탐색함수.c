# include <stdio.h>
# pragma warning (disable:4996)

// �迭 Ž���ϴ� �Լ�
// �־��� ������ ���տ��� ������ �����ϴ� �����͸� ã�� ��
void research_array(int arr[], int size, int key) {

	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			printf("ã�� ������ �ε���: %d\n", i);
	}
}

int main(void) {

	int data[5] = { 51,31,28,17,46 };
	int key;
	int size = sizeof(data) / sizeof(data[0]);
	printf("ã�� Ű? ");
	scanf("%d", &key);
	research_array(data, size, key);

}

