# include <stdio.h>

int main(void) {
	int x = 5, y = 1, z = 15;
	int result;

	result = ++x * 2;
	printf("result = %d\n", result);

	result = x + 1 > 0;
	printf("reslut = %d\n", result);

	result = x << y;
	printf("result = %d\n", result);

	result = (x + y) / 2;
	printf("result = %d\n", result);

	result = x = y;
	printf("result = %x\n", y);
}