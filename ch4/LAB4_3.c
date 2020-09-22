# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	int num;

	printf("Enter the number: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("짝수입니다.");
		printf("\n몫은 %d입니다", num / 2);
	}

	else {
		printf("홀수입니다.");
		printf("\n나머지가 %d입니다.", num % 2);
	}

}