# include <stdio.h>
# pragma warning (disable:4996)
# define RATE 0.3025

int main(void) {

	float area, py;

	printf("아파트의 면적을 제곱미터 단위로 입력하시오: ");
	scanf("%f", &area);

	py = area * RATE;
	printf("%.2f 제곱미터는 %.2f 평에 해당된다.", area, py);
}