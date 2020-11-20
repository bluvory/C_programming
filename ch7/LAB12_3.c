# include <stdio.h>
# pragma warning (disable:4996)
# define SIZE 10

void print_array(int arr[], int size) {

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}


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

int find_arr(int arr[], int size, int searchKey) {

	int start = 0, stop = size-1;

	while (start <= stop) {
		int mid = (start + stop) / 2;
		if (arr[mid] == searchKey) return mid;
		else if (searchKey < arr[mid]) stop = mid - 1;
		else start = mid + 1;
	}
	return -1;
	
}

int main(void) {

	int data[SIZE];
	int d;

	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &d);
		data[i] = d;
	}

	printf("\n");
	sort_array(data, SIZE);
	
	int key;
	printf("찾고싶은 숫자를 입력하세요: ");
	scanf("%d", &key);
	
	//if (res == -1) printf("찾고싶은 숫자가 없습니다");
	//else printf("%d", res);
	printf("%d", find_arr(data, SIZE, key));
}

