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

	// �� for������ sp�� ���������Ƿ� �ٽ� �ǵ��������
	sp = s;

	printf("�̸�\t�߰�\t�б⸻\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);
		sp++;
	}

}