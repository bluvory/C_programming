# include <stdio.h>
# define ARR_SIZE 5

int main(void) {

	// 배열의 복사
	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 0 };
	// y = x; 라고 하면 안됨 => 원소단위로 복사하기
	for (int i = 0; i < ARR_SIZE; i++)
		y[i] = x[i];

	// 배열의 비교 -> 모든 원소의 값이 같으면 배열 전체의 내용이 같다
	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 10,20,30,40,50 };
	if (x == y) printf("두 배열의 주소가 같습니다\n");

	int is_equal = 1;
	for (int i = 0; i < ARR_SIZE; i++) {
		if (x[i] != y[i]) {
			is_equal = 0;
			break;
		}
	}
	if (is_equal == 1) printf("같음\n");
	else printf("다름\n");

}