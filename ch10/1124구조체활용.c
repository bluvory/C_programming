# include <stdio.h>
# include <math.h>
# pragma warning (disable:4996)

struct content {
	char title[40];
	int price;
	double rate;
};

struct point {
	int x, y;
};


// ���� ���� ȣ�� -> ����ü ����
void print_point_byVAL(struct point pt) {
	printf("(%d, %d) ", pt.x, pt.y);
}

void print_point_byPTR(const struct point* ptr) {
	printf("(%d, %d) ", ptr->x, ptr->y);
}

void move_point(struct point* ptr, int offset) {
	ptr->x = ptr->x + offset;
	ptr->y = ptr->y + offset;
}


// ����ü�� ����� �ٸ� ����ü ���
struct line {
	struct point start, end;
};

double get_length(const struct line* ptr) {
	int dx = ptr->end.x - ptr->start.x;
	int dy = ptr->end.y - ptr->start.y;
	return sqrt(dx * dx + dy * dy);
}


int main(void) {

	// ����ü �迭
	struct content arr[] = {
		{"Avengers", 11000, 8.8},
		{"Aquaman", 5500, 7.1},
		{"Shazam!", 7700, 7.4}
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
		printf("arr[%d] = %s, %d, %.1f\n", i, arr[i].title, arr[i].price, arr[i].rate);


	// ����ü �迭�� Ž��
	char title[40];
	printf("����? ");
	gets_s(title, sizeof(title));
	
	int i;
	for (i = 0; i < size; i++)
		if (strcmp(arr[i].title, title) == 0) break;

	if (i == size) printf("�ش� �������� ã�� �� ����\n");
	else printf("%s: ����=%d, ����=%.1f\n", arr[i].title, arr[i].price, arr[i].rate);
	

	// ����ü ������
	struct content c1 = {
		"Avengers", 11000, 8.8
	};
	struct content* p = &c1;
	p->price *= 0.8;
	p->rate = 8.9;
	strcat(p->title, ": Endgame");
	printf("%s, %d, %.1f\n", p->title, p->price, p->rate);

	// ���� ��� ���� ������
	// ptr -> member
	// (*ptr).member

	// �б� ���� ����ü ���� const
	struct content c2;
	const struct content* ptr = &c2;


	// �Լ��� ���ڷ� ����ü �����ϱ�
	struct point pt1 = { 10,20 };

	// 1. ���� ���� ȣ��
	print_point_byVAL(pt1);
	printf("\n");

	// 2. ������ ���� ȣ�� (�����ͷ� ����)
	print_point_byPTR(&pt1);
	printf("\n");

	// 3. ������ ���� ȣ��2
	int offset;
	printf("�̵��� ������? ");
	scanf("%d", &offset);
	move_point(&pt1, offset);
	print_point_byPTR(&pt1);
	printf("\n");


	// ����ü�� ����� �ٸ� ����ü ���
	struct line ln1 = {
		{10,20}, {30,40}
	};

	printf("���� ����: ");
	print_point_byPTR(&ln1.start);
	print_point_byPTR(&ln1.end);
	printf("\n");
	printf("����: %f\n", get_length(&ln1));



}
