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

	//이 문제는 이전 과제의 추가본으로, scores의 데이터를 입력받아야 합니다.
	int score;

	for (int i = 0; i < size; i++) {
		scanf("%d", &score);
		scores[i] = score;
	}


	// 4. 최소값을 구하는 함수를 만들어
	// scores에서 최소값을 찾아서 main에서 출력하시오.
	printf("scores의 최솟값 : %d\n", getMin(scores, size));  // 함수명(배열명, 배열크기)
	return 0;
}