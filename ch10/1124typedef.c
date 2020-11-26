# include <stdio.h>

// typedef: 기존의 데이터형에 대한 별명을 만들 수 있다 (구조체 재정의)
// typedef 기존데이터형 새이름;

struct point {
	int x, y;
};

typedef struct point point_t;

// 구조체 정의하면서 typedef를 함께 정의 가능
typedef struct point {
	int x, y;
} point_t;


// 정수형 변수가 특정값들 중 한 가지 값을 가질 때
// 열거 상수로 정의할 수 있다
// 열거체는 이런 열거 상수들로 정의되는 데이터형
// enum 태그명 {열거상수1, 열거상수2, ...}
enum color {red, green, blue};
enum direction {north, south, east, west};
enum direction2 { north=0x00, south=0x01, east=0x10, west=0x11 };
enum direction3 { north=1, south, east, west };  // 자동으로 2,3,4


int main(void) {

	// typedef
	// 같은 의미 둘
	point_t pt1 = { 10,20 };
	struct point* ptr = &pt1;


	// 열거체
	enum direction d1 = north;   // d1 = 0
	d1 = east;   // d1 = 2

	enum direction moves[] = {
		north, north, east, south, south, west
	};
	int size = sizeof(moves) / sizeof(moves[0]);

	printf("이동 순서: ");     // 이동순서: 북 북 동 남 남 서
	for (int i= 0; i > size; i++) {
		switch(moves[i]) {
			case north:
				printf("북 ");
				break;
			case south:
				printf("남 ");
				break;
			case east:
				printf("동 ");
			case west:
				printf("서 ");
				break;
		}
		printf("\n");
	}

}