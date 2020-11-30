# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int price, dis;

	printf("제품의 가격? ");
	scanf("%d", &price);

	printf("할인율(%%)? ");
	scanf("%d", &dis);

	printf("%d원 할인되었습니다.\n", price*dis/100);

	printf("할인가: %d", price - price*dis/100);

}