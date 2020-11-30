# include <stdio.h>
# pragma warning (disable:4996)

// 배열 탐색하는 함수
// 주어진 데이터 집합에서 조건이 만족하는 데이터를 찾는 것
void research_array(int arr[], int size, int key) {

	for (int i = 0; i < size; i++) {
		if (arr[i] == key)
			printf("찾은 원소의 인덱스: %d\n", i);
	}
}

int main(void) {

	int data[5] = { 51,31,28,17,46 };
	int key;
	int size = sizeof(data) / sizeof(data[0]);
	printf("찾을 키? ");
	scanf("%d", &key);
	research_array(data, size, key);

}

