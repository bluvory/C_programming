# include <stdio.h>

// ����ü: ���� �ٸ� ���������� �������� �ϳ��� ��� ����ϴ� ���
// �±��̸� { ����ü�Ǹ�� };
// �Լ��ۿ� ����, �ҽ����� ���ۺκп� �����ϴ� �� ����

struct content {
	char title[40];
	int price;
	double rate;
};


// ����ü�� �����ϸ鼭 ����ü ������ �Բ� ����
struct app_info {
	char title[128];
	int notisfication;
	int version;
} facebook;


int main(void) {

	// ����ü�� ����Ʈ ũ��
	printf("����ü ũ��: %d\n", sizeof(struct content));


	// ����ü ������ ����
	struct content movie;


	// ����ü ������ �ʱ�ȭ
	// ��� �������, �ʱⰪ �����ϸ� �������� 0���� �ʱ�ȭ
	struct content c1 = { "Avengers", 11000, 8.8 };


	// ����ü ������ ���
	struct content c2;
	c2.rate = 7.1;
	c2.price = 5500;
	strcpy(c2.title, "Endgame");   // strcat, strcpy


	// ����ü ���� ���� ����
	struct content c3 = { 0 };
	c3 = c1;     // ����
	// c3 = {"Aquaman", 5500, 7.1}  �Ұ���
	// c3.title = c1.title  �Ұ���


	printf("c1 = %s, %d, %1.f\n", c1.title, c1.price, c1.rate);
	printf("c2 = %s, %d, %1.f\n", c2.title, c2.price, c2.rate);
	printf("c3 = %s, %d, %1.f\n", c3.title, c3.price, c3.rate);


	// ����ü ������ ��
	// ����ü �������� ���� ������ ��� �Ұ�
	// ����ü ������ ���� ������ ���Ϸ��� ��� �� ����� ���ؾ� �Ѵ�
	// title ����� ���ڿ��̹Ƿ� strcmp �Լ� �̿�
	// if (c1 == c2) printf("c1�� c2�� ����");   �Ұ���
	if (strcmp(c1.title, c3.title) == 0 && c1.price == c3.price && c1.rate == c3.rate)
		printf("c1�� c3�� ����\n");
	else printf("c1�� c3�� �ٸ���\n");


}