// 7�� ��������10

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char arr[10] = { 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O' };
	int seat = 10;
	int tic;
	int p=0;

	while (1) {

		printf("���� �¼�: [ ");
		for (int i = 0; i < 10; i++) {
			printf("%c ", arr[i]);
		}
		printf("]");

		printf("\n������ �¼���? ");
		scanf("%d", &tic);

		if (seat >= tic) {
			for (int i = 0; i < tic; i++) {
				printf("%d ", i+p+1);
			}
			printf("�� �¼��� �����߽��ϴ�.\n");
			seat -= tic;
			for (int i = p; i < p + tic; i++) {
				arr[i] = 'X';
			}
			p += tic;
			
		}

		else {
			printf("���� �¼����� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�.\n", seat, tic);
			break;
		}

	}

}