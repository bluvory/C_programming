# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int rank, num;
	char grade;

	printf("Enter your rank: ");
	scanf("%d", &rank);
	printf("Enter the total number of people: ");
	scanf("%d", &num);

	if (num*0.3 >= rank)
		grade = 'A';
	else if (num*0.6 >= rank)
		grade = 'B';
	else if (num*0.7 >= rank)
		grade = 'C';
	else
		grade = 'F';

	printf("Your grade is %c!", grade);

}