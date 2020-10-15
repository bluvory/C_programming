# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning (disable:4996)

int main(void) {

	srand(time(NULL));
	int com = rand() % 3;
	int you;

	printf("scissor(0), rock(1), paper(2) 중 하나를 입력하시오: ");
	scanf("%d", &you);

	if ((com == 0 && you == 1) || (com==1 && you==2) || (com==2 && you==0))
		printf("You Lose");

	else printf("You Win");

}