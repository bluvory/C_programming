# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	
	printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻÿ�\n");

	int score, res = 0, cnt = 0;

	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &score);

		if (score < 0)
			break;

		res += score;
		cnt++;

	}

	float avg = res / cnt;
	printf("������ ����� %f�Դϴ�.", avg);

}