# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning (disable:4996)

int main(void) {

	srand(time(NULL));
	int rotto = rand() % 90 + 10;
	int num;

	printf("두 자리 정수를 입력하시오: ");
	scanf("%d", &num);

	printf("생성된 복권 번호는 %d\n", rotto);

	if (num == rotto)
		printf("숫자와 순서가 모두 일치하므로\n1,000,000원");
	else if (num % 10 + num / 10 == rotto)
		printf("숫자가 모두 일치하므로\n300,000원");
	else if ((num%10 == rotto%10) || (num%10==rotto/10) || (num/10 == rotto%10) || (num/10 == rotto/10))
		printf("하나의 숫자가 일치하므로\n10,000원");
	else
		printf("숫자가 하나도 일치하지 않으므로\n0원");

}