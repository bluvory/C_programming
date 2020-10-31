# include <stdio.h>
# pragma warning (disable:4996)


// 함수의 매개변수로 배열을 선언 (배열의 크기 생략)
void print_array(int arr[], int size) {

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}

// 선택정렬하는 함수
// 주어진 데이터 항목을 지정한 순서로 나열하는 것
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

		printf("i = %d 일때 정렬 결과: ", i);
		print_array(arr, size);
	}

}

int main(void) {

	int data[] = { 51,31,28,17,46 };
	int size = sizeof(data) / sizeof(data[0]);

	printf("\n");
	sort_array(data, size);
	
}

