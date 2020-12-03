# include <stdio.h>
# pragma warning (disable:4996)

// 파일의 위치 지시자
// 파일에서 입력과 출력이 수행되는 위치
// 입출력 함수를 호출할 때마다 파일 위치 지시자가 갱신
// 일반적인 파일 입출력은 파일을 연 다음 파일의 시작 위치부터 순차적으로 접근
// 2진 파일에 대해 임의접근하려면 fseek, ftell 사용


int main(void) {

	// 파일에서 입출력을 수행할 위치 조정
	// offset: 기준 위치로부터 몇 바이트 떨어졌는지
	// origin: 기준위치
	// SEEK_SET 시작, SEEK_CUR 현재, SEEK_END 끝
	int fseek(FILE * stream, long offset, int origin);


	// 파일 시작부터 파일 위치 지시자가 몇 바이트 떨어져있는지 리턴
	long ftell(FILE * stream);
}