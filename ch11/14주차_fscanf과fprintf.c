# include <stdio.h>
# include <string.h>
# pragma warning (disable:4996)

// 문자 입출력: fgetc, fputc
// 문자열 입출력: fgets, fputs
// 형식화된 입출력: fscanf, fprintf


// stream이 stdout이면 콘솔에, 파일 포인터면 파일에 출력
void print_array(const int arr[], int size, FILE* stream) {
	for (int i = 0; i < size; i++)
		fprintf(stream, "%2d", arr[i]);
	fprintf(stream, "\n");
}


int main(void) {

	// 형식 문자열을 이용
	int fscanf(FILE * stream, const char* format);
	int fprintf(FILE * stream, const char* format);


	// 파일 포인터를 매개변수로 갖는 함수 //
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	char filename[128] = "";
	FILE* fp = NULL;

	printf("파일 이름? ");
	gets_s(filename, sizeof(filename));
	fp = fopen(filename, "w");
	if (fp == NULL)
		fp = stdout;
	print_array(arr, size, fp);
	fclose(fp);
}