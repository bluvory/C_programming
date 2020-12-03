# include <stdio.h>
# pragma warning (disable:4996)


int main(void) {

	// 이전 입출력에서 에러가 발생했는지 확인
	int ferror(FILE * stream);

	// 파일의 끝인지 검사
	int feof(FILE * stream);
}