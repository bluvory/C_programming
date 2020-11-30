# include <stdio.h>
# pragma warning (disable:4996)

int get_max(int a, int b, int c) {
	
	int res;
	if (a > b && a > c) res = a;
	else if (b > a && b > c) res = b;
	else res = c;
	return res; // 함수끝나는거라고 얘기해줌 return 아래에 써도 실행안됨
	
	/*
	int res1 = a > b ? a : b;
	int res2 = res1 > c ? res1 : c;
	return res2;

	int max;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;
	*/
}

int main(void) {
	int a, b, c;
	printf("Enter your three number: ");
	scanf("%d %d %d", &a, &b, &c);

	int max1 = get_max(a, b, c);
	printf("max of number: %d", max1);
}