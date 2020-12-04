# include <stdio.h>
# pragma warning (disable:4996)

double sum_arr(double arr[]) {

	double s = 0;
	for (int i = 0; i < 5; i++)
		s += arr[i];

	return s;
}

int main(void) {

	double a, b, c, d, e;
	double arr[5];

	printf("실수 5개를 입력하세요: ");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);

	arr[0] = a;  arr[1] = b;
	arr[2] = c;  arr[3] = d;  arr[4] = e;
	
	printf("합계: %lf", sum_arr(arr));

}