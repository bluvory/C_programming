# include <stdio.h>
# pragma warning (disable:4996)
# define ROW 3
# define COL 2
# define SIZE 5

void print_array();

int main(void) {

	// 다차원 배열의 선언
	// 데이터형 배열명[행크기][열크기]
	int scores[5][3];
	int data[ROW][COL];

	printf("sizeof(data)       = %d\n", sizeof(data));
	printf("sizeof(data[0])    = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));

	for (int i = 0, k = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			data[i][j] = ++k;
			printf("%3d ", data[i][j]);
		}
		printf("\n");
			
	}
		
	// 2차원 배열의 초기화
	int data2[3][2] = { {10,20}, {30,40}, {50,60} };
	int data3[3][2] = { 10,20,30,40,50,60 };
	int data4[4][3] = { {1,2,3},{4,5},{6} };
	int data5[3][2] = { 1,2,3 };    // {{1,2},{3,0},{0,0}}

	// 행크기 생략 가능, 열크기 생략 불가능
	int data6[][2] = { 1,2,3,4,5,6,7 };   // {{1,2},{3,4},{5,6},{7,0}}


	// 배열의 탐색: 주어진 데이터 집합에서 조건이 만족하는 데이터를 찾는 것
	int key;
	int x[] = { 12,34,51,22,91,12,15 };
	int size = sizeof(x) / sizeof(x[0]);
	printf("찾을 키? ");
	scanf("%d", &key);
	for (int i = 0; i < size; i++) {
		if (x[i] == key)
			printf("찾은 원소의 인덱스: %d\n", i);
	}
		

	// 배열의 정렬: 주어진 데이터 항목을 지정한 순서로 나열하는 것
	int df[SIZE] = { 51,31,28,17,46 };
	int index_min, tmp;
	for (int i = 0; i < SIZE - 1; i++) {
		index_min = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (df[index_min] > df[j])
				index_min = j;
		}
		if (i != index_min) {
			tmp = df[i];
			df[i] = df[index_min];
			df[index_min] = tmp;
		}
		printf("i = %d 일때 정렬 결과: ", i);
		print_array(df, SIZE);
	}
}


// 함수의 매개변수로 배열을 선언 (배열의 크기 생략)
void print_array(int arr[], int size) {

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}