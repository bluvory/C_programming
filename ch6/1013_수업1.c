// 191쪽

// 표준입출력함수가 정의된 것
# include <stdio.h>

// 함수 헤더: 반환형 함수(매개변수 목록) 
// 함수 바디: 문장들의 집합
void hi(void) {
	printf("bibi");
}

void bye(void) {
	printf("쉬는시간입니다 10시까지");
}

int main(void) {

	// 함수 호출: 함수명(매개변수에 전달할 데이터 목록)
	hi();
	bye();

	for (int i = 1; i <=5; i++) {
		bye();
	}
}
