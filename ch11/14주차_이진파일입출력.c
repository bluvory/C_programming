# include <stdio.h>
# pragma warning (disable:4996)
# define SIZE 10


int is_equal_array(const int x[], const int y[], int sz) {
	
	for (int i = 0; i < sz; i++)
		if (x[i] != y[i]) return 0;
	return 1;
}

int main(void) {

	// ���Ϸ� 2�� ������ ����
	// ���Ϸ� �����͸� ������ ���� ������ �׸��� ���� ����
	// buffer: ���Ϸ� ������ �������� �ּ�
	// size: ������ ������ �׸� �ϳ��� ũ��
	// count: ������ �׸��� ����
	// stream: ���� ������
	size_t fwrite(const void* buffer, size_t size, size_t count, FILE * stream);


	// 2�� ���Ϸ� �����ϰ� �о����
	int arr1[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[SIZE];
	FILE* fp = NULL;

	fp = fopen("test.dat", "wb");
	if (fp == NULL) {
		printf("��¿� ���� ���� ����\n");
		return 1;
	}
	fwrite(arr1, sizeof(arr1[0]), SIZE, fp);
	fclose(fp);
	fp = NULL;

	fp = fopen("test.dat", "rb");
	if (fp == NULL) {
		printf("�Է¿� ���� ���� ����\n");
		return 1;
	}
	fread(arr2, sizeof(arr2[0]), SIZE, fp);
	fclose(fp);
	fp = NULL;

	if (is_equal_array(arr1, arr2, SIZE))
		printf("2�� ���� ����� ����\n");
	else
		printf("2�� ���� ����� ����\n");



}