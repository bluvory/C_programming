# include <stdio.h>
# pragma warning (disable:4996)

struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void) {

	struct student s[3];
	struct student *sp = s;

	for (int i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", (*sp).name);

		printf("Enter midterm and final score: ");
		scanf("%d %d", &(*sp).midterm, &(*sp).final);
		sp++;
	}

	// 위 for문에서 sp가 증가했으므로 다시 되돌려줘야함
	sp = s;

	printf("이름\t중간\t학기말\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);
		sp++;
	}

}