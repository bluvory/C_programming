# include <stdio.h>
# pragma warning (disable:4996)

// ��ȯ�ϴ� ���°� void
void add(int a, int b) {
	int num;
	num = a + b;
	printf("�� ���� ��: %d", num);
}

// ��ȯ�ϴ� ���°� int
int add2(int a, int b) {
	int num;
	num = a + b;
	return num;
}


int main(void) {
	int n1, n2;

	printf("Enter the first numer: ");
	scanf("%d", &n1);
	printf("Enter the second number: ");
	scanf("%d", &n2);

	// �����ϴ� �Լ��� ȣ���Ͻÿ�
	add(n1, n2);
	printf("\n");

	int res;
	res = add2(n1, n2);
	printf("�� ���� ��: %d", res);

	return 0;
}