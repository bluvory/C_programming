# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	int score;
	char grade;

	printf("Enter a score: ");
	scanf("%d", &score);

	if (score >= 80)
		grade = 'A';
	else if (score >= 60)
		grade = 'B';
	else if (score >= 40)
		grade = 'C';
	else
		grade = 'F';

	printf("The grade is %c!", grade);

}