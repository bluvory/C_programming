# include <stdio.h>
# pragma warning (disable:4996)
# define ROW 3
# define COL 2
# define SIZE 5

void print_array();

int main(void) {

	// ������ �迭�� ����
	// �������� �迭��[��ũ��][��ũ��]
	int scores[5][3];
	int data[ROW][COL];

	printf("sizeof(data)       = %d\n", sizeof(data));
	printf("sizeof(data[0])    = %d\n", sizeof(data[0]));
	printf("sizeof(data[0][0]) = %d\n", sizeof(data[0][0]));

	for (int i = 0, k = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			data[i][j] = ++k;
			printf("%3d ", data[i][j]);
		}
		printf("\n");
			
	}
		
	// 2���� �迭�� �ʱ�ȭ
	int data2[3][2] = { {10,20}, {30,40}, {50,60} };
	int data3[3][2] = { 10,20,30,40,50,60 };
	int data4[4][3] = { {1,2,3},{4,5},{6} };
	int data5[3][2] = { 1,2,3 };    // {{1,2},{3,0},{0,0}}

	// ��ũ�� ���� ����, ��ũ�� ���� �Ұ���
	int data6[][2] = { 1,2,3,4,5,6,7 };   // {{1,2},{3,4},{5,6},{7,0}}


	// �迭�� Ž��: �־��� ������ ���տ��� ������ �����ϴ� �����͸� ã�� ��
	int key;
	int x[] = { 12,34,51,22,91,12,15 };
	int size = sizeof(x) / sizeof(x[0]);
	printf("ã�� Ű? ");
	scanf("%d", &key);
	for (int i = 0; i < size; i++) {
		if (x[i] == key)
			printf("ã�� ������ �ε���: %d\n", i);
	}
		

	// �迭�� ����: �־��� ������ �׸��� ������ ������ �����ϴ� ��
	int df[SIZE] = { 51,31,28,17,46 };
	int index_min, tmp;
	for (int i = 0; i < SIZE - 1; i++) {
		index_min = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (df[index_min] > df[j])
				index_min = j;
		}
		if (i != index_min) {
			tmp = df[i];
			df[i] = df[index_min];
			df[index_min] = tmp;
		}
		printf("i = %d �϶� ���� ���: ", i);
		print_array(df, SIZE);
	}
}


// �Լ��� �Ű������� �迭�� ���� (�迭�� ũ�� ����)
void print_array(int arr[], int size) {

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

}