# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num;
	printf("출력하고 싶은 단을 입력하시오: ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		printf("%d * %d = %d\n", num, i, num * i);
}