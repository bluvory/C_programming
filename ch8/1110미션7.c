# include <stdio.h>
# pragma warning (disable:4996)

// 책 연습문제 7번
// 크기가 같은 2개의 정수형 배열을 매개변수로 전달받아
// 두 배열의 원소들의 값을 맞바꾸는 함수를 작성하시오
// 이 함수를 이용해서 크기가 5인 배열의 값을 맞바꾸는 프로그램을 작성하시오


int swap_array(int *a, int *b) {
	int temp;	
	for (int i = 0; i < 5; i++) {
		temp = *a;
		*a = *b;
		*b = temp;
		*a = *(a++);
		*b = *(b++);
	}
	
	
}

void print_arr(int a[], int n) {
	
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}


int main(void) {

	int aa[5] = { 1,3,5,7,9 };
	int bb[5] = { 0,2,4,6,8 };
	swap_array(&aa, &bb);
	print_arr(aa[5], 5);
	print_arr(aa[5], 5);

}