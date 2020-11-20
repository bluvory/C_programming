// 7장 연습문제5

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	float arr[10] = { 1.2,3.1,4.3,4.5,6.7,2.3,8.7,9.5,2.3,5.8 };
	float xarr[10];

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%.1f ", arr[i]);

	for (int i = 0; i < 10; i++)
		xarr[9 - i] = arr[i];

	printf("\n역순: ");
	for (int i = 0; i < 10; i++)
		printf("%.1f ", xarr[i]);

}