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


// 값에 의한 호출 -> 구조체 복사
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


// 구조체의 멤버로 다른 구조체 사용
struct line {
	struct point start, end;
};

double get_length(const struct line* ptr) {
	int dx = ptr->end.x - ptr->start.x;
	int dy = ptr->end.y - ptr->start.y;
	return sqrt(dx * dx + dy * dy);
}


int main(void) {

	// 구조체 배열
	struct content arr[] = {
		{"Avengers", 11000, 8.8},
		{"Aquaman", 5500, 7.1},
		{"Shazam!", 7700, 7.4}
	};

	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++)
		printf("arr[%d] = %s, %d, %.1f\n", i, arr[i].title, arr[i].price, arr[i].rate);


	// 구조체 배열의 탐색
	char title[40];
	printf("제목? ");
	gets_s(title, sizeof(title));
	
	int i;
	for (i = 0; i < size; i++)
		if (strcmp(arr[i].title, title) == 0) break;

	if (i == size) printf("해당 콘텐츠를 찾을 수 없다\n");
	else printf("%s: 가격=%d, 평점=%.1f\n", arr[i].title, arr[i].price, arr[i].rate);
	

	// 구조체 포인터
	struct content c1 = {
		"Avengers", 11000, 8.8
	};
	struct content* p = &c1;
	p->price *= 0.8;
	p->rate = 8.9;
	strcat(p->title, ": Endgame");
	printf("%s, %d, %.1f\n", p->title, p->price, p->rate);

	// 간접 멤버 접근 연산자
	// ptr -> member
	// (*ptr).member

	// 읽기 전용 구조체 변수 const
	struct content c2;
	const struct content* ptr = &c2;


	// 함수의 인자로 구조체 전달하기
	struct point pt1 = { 10,20 };

	// 1. 값에 의한 호출
	print_point_byVAL(pt1);
	printf("\n");

	// 2. 참조에 의한 호출 (포인터로 전달)
	print_point_byPTR(&pt1);
	printf("\n");

	// 3. 참조에 의한 호출2
	int offset;
	printf("이동할 오프셋? ");
	scanf("%d", &offset);
	move_point(&pt1, offset);
	print_point_byPTR(&pt1);
	printf("\n");


	// 구조체의 멤버로 다른 구조체 사용
	struct line ln1 = {
		{10,20}, {30,40}
	};

	printf("직선 정보: ");
	print_point_byPTR(&ln1.start);
	print_point_byPTR(&ln1.end);
	printf("\n");
	printf("길이: %f\n", get_length(&ln1));



}
