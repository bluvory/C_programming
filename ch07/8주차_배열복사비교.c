# include <stdio.h>
# define ARR_SIZE 5

int main(void) {

	// �迭�� ����
	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 0 };
	// y = x; ��� �ϸ� �ȵ� => ���Ҵ����� �����ϱ�
	for (int i = 0; i < ARR_SIZE; i++)
		y[i] = x[i];

	// �迭�� �� -> ��� ������ ���� ������ �迭 ��ü�� ������ ����
	int x[ARR_SIZE] = { 10,20,30,40,50 };
	int y[ARR_SIZE] = { 10,20,30,40,50 };
	if (x == y) printf("�� �迭�� �ּҰ� �����ϴ�\n");

	int is_equal = 1;
	for (int i = 0; i < ARR_SIZE; i++) {
		if (x[i] != y[i]) {
			is_equal = 0;
			break;
		}
	}
	if (is_equal == 1) printf("����\n");
	else printf("�ٸ�\n");

}