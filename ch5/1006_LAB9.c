# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning (disable:4996)

int main(void) {

	srand(time(NULL));
	int num = rand() % 100 + 1;
	int ans, cnt=0;

	while (1) {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &ans);
		cnt++;

		if (ans == num) {
			printf("�����մϴ�. �õ�Ƚ��=%d", cnt);
			break;
		}
		else if (ans > num) printf("������ ������ �����ϴ�.");
		else if (ans < num) printf("������ ������ �����ϴ�.");
		printf("\n");
		
	}
}