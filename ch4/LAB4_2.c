# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char grade;
	int score;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A') {
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("%d������ %c�����̱���", score, grade);
	}

	return 0;

}