# include <stdio.h>
# pragma warning (disable:4996)

// å �������� 7��
// ũ�Ⱑ ���� 2���� ������ �迭�� �Ű������� ���޹޾�
// �� �迭�� ���ҵ��� ���� �¹ٲٴ� �Լ��� �ۼ��Ͻÿ�
// �� �Լ��� �̿��ؼ� ũ�Ⱑ 5�� �迭�� ���� �¹ٲٴ� ���α׷��� �ۼ��Ͻÿ�


int swap_array(int *a, int *b) {
	int temp;	
	for (int i = 0; i < 5; i++) {
		temp = *a;
		*a = *b;
		*b = temp;
		*a = *(a++);
		*b = *(b++);
	}
	
	
}

void print_arr(int a[], int n) {
	
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}


int main(void) {

	int aa[5] = { 1,3,5,7,9 };
	int bb[5] = { 0,2,4,6,8 };
	swap_array(&aa, &bb);
	print_arr(aa[5], 5);
	print_arr(aa[5], 5);

}