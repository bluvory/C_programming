# include <stdio.h>
# pragma warning (disable:4996)
# define SIZE 10


int is_equal_array(const int x[], const int y[], int sz) {
	
	for (int i = 0; i < sz; i++)
		if (x[i] != y[i]) return 0;
	return 1;
}

int main(void) {

	// 파일로 2진 데이터 저장
	// 파일로 데이터를 저장한 다음 저장한 항목의 개수 리턴
	// buffer: 파일로 저장할 데이터의 주소
	// size: 저장할 데이터 항목 하나의 크기
	// count: 저장할 항목의 개수
	// stream: 파일 포인터
	size_t fwrite(const void* buffer, size_t size, size_t count, FILE * stream);


	// 2진 파일로 저장하고 읽어오기
	int arr1[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[SIZE];
	FILE* fp = NULL;

	fp = fopen("test.dat", "wb");
	if (fp == NULL) {
		printf("출력용 파일 열기 실패\n");
		return 1;
	}
	fwrite(arr1, sizeof(arr1[0]), SIZE, fp);
	fclose(fp);
	fp = NULL;

	fp = fopen("test.dat", "rb");
	if (fp == NULL) {
		printf("입력용 파일 열기 실패\n");
		return 1;
	}
	fread(arr2, sizeof(arr2[0]), SIZE, fp);
	fclose(fp);
	fp = NULL;

	if (is_equal_array(arr1, arr2, SIZE))
		printf("2진 파일 입출력 성공\n");
	else
		printf("2진 파일 입출력 실패\n");



}