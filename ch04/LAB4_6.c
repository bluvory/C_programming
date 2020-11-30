# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("파일 열기");
		break;
	case 2:
		printf("파일 편집");
		break;
	case 3:
		printf("파일 저장");
		break;
	case 4:
		printf("파일 인쇄");
		break;
	default:
		printf("Invalid number");
		break;
	}

}