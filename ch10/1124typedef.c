# include <stdio.h>

// typedef: ������ ���������� ���� ������ ���� �� �ִ� (����ü ������)
// typedef ������������ ���̸�;

struct point {
	int x, y;
};

typedef struct point point_t;

// ����ü �����ϸ鼭 typedef�� �Բ� ���� ����
typedef struct point {
	int x, y;
} point_t;


// ������ ������ Ư������ �� �� ���� ���� ���� ��
// ���� ����� ������ �� �ִ�
// ����ü�� �̷� ���� ������ ���ǵǴ� ��������
// enum �±׸� {���Ż��1, ���Ż��2, ...}
enum color {red, green, blue};
enum direction {north, south, east, west};
enum direction2 { north=0x00, south=0x01, east=0x10, west=0x11 };
enum direction3 { north=1, south, east, west };  // �ڵ����� 2,3,4


int main(void) {

	// typedef
	// ���� �ǹ� ��
	point_t pt1 = { 10,20 };
	struct point* ptr = &pt1;


	// ����ü
	enum direction d1 = north;   // d1 = 0
	d1 = east;   // d1 = 2

	enum direction moves[] = {
		north, north, east, south, south, west
	};
	int size = sizeof(moves) / sizeof(moves[0]);

	printf("�̵� ����: ");     // �̵�����: �� �� �� �� �� ��
	for (int i= 0; i > size; i++) {
		switch(moves[i]) {
			case north:
				printf("�� ");
				break;
			case south:
				printf("�� ");
				break;
			case east:
				printf("�� ");
			case west:
				printf("�� ");
				break;
		}
		printf("\n");
	}

}