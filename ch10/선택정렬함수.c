# include <stdio.h>
# pragma warning (disable:4996)


// �Լ��� �Ű������� �迭�� ���� (�迭�� ũ�� ����)
void print_array(int arr[], int size) {

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}

// ���������ϴ� �Լ�
// �־��� ������ �׸��� ������ ������ �����ϴ� ��
void sort_array(int arr[], int size) {

	int index_min, tmp;

	for (int i = 0; i < size - 1; i++) {
		index_min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[index_min] > arr[j])
				index_min = j;
		}
		if (i != index_min) {
			tmp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = tmp;
		}

		printf("i = %d �϶� ���� ���: ", i);
		print_array(arr, size);
	}

}

int main(void) {

	int data[] = { 51,31,28,17,46 };
	int size = sizeof(data) / sizeof(data[0]);

	printf("\n");
	sort_array(data, size);
	
}

