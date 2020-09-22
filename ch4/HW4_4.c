# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int temp;

	printf("Enter the temperature: ");
	scanf("%d", &temp);

	if (temp >= 33) {
		printf("폭염 주의보가 발효되었습니다.");
		printf("\n건강에 유의하세요");
		printf("\n현재 온도는 %d입니다.", temp);
	}
	else
		printf("\n현재 온도는 %d입니다.", temp);

}