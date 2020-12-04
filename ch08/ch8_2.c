# include <stdio.h>

int main(void) {

	double x[3];
	double* p = x;

	// 주소 연산자 사용하지 않고 주소 구하기
	for (int i = 0; i < 3; i++)
		printf("x[%d]의 주소: %p\n", i, p);
}