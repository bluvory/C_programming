# include <stdio.h>

// 구조체: 서로 다른 데이터형의 변수들을 하나로 묶어서 사용하는 기능
// 태그이름 { 구조체의멤버 };
// 함수밖에 정의, 소스파일 시작부분에 정의하는 게 좋음

struct content {
	char title[40];
	int price;
	double rate;
};


// 구조체를 정의하면서 구조체 변수를 함께 선언
struct app_info {
	char title[128];
	int notisfication;
	int version;
} facebook;


int main(void) {

	// 구조체의 바이트 크기
	printf("구조체 크기: %d\n", sizeof(struct content));


	// 구조체 변수의 선언
	struct content movie;


	// 구조체 변수의 초기화
	// 멤버 순서대로, 초기값 부족하면 나머지는 0으로 초기화
	struct content c1 = { "Avengers", 11000, 8.8 };


	// 구조체 변수의 사용
	struct content c2;
	c2.rate = 7.1;
	c2.price = 5500;
	strcpy(c2.title, "Endgame");   // strcat, strcpy


	// 구조체 변수 간의 대입
	struct content c3 = { 0 };
	c3 = c1;     // 가능
	// c3 = {"Aquaman", 5500, 7.1}  불가능
	// c3.title = c1.title  불가능


	printf("c1 = %s, %d, %1.f\n", c1.title, c1.price, c1.rate);
	printf("c2 = %s, %d, %1.f\n", c2.title, c2.price, c2.rate);
	printf("c3 = %s, %d, %1.f\n", c3.title, c3.price, c3.rate);


	// 구조체 변수의 비교
	// 구조체 변수에는 관계 연산자 사용 불가
	// 구조체 변수의 값이 같은지 비교하려면 멤버 대 멤버로 비교해야 한다
	// title 멤버는 문자열이므로 strcmp 함수 이용
	// if (c1 == c2) printf("c1과 c2가 같다");   불가능
	if (strcmp(c1.title, c3.title) == 0 && c1.price == c3.price && c1.rate == c3.rate)
		printf("c1과 c3가 같다\n");
	else printf("c1과 c3가 다르다\n");


}