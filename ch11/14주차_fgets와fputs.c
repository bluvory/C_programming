# include <stdio.h>
# include <conio.h>
# pragma warning (disable:4996)
# define BUFSIZE 512

// 문자 입출력: fgetc, fputc
// 문자열 입출력: fgets, fputs
// 형식화된 입출력: fscanf, fprintf

int main(void) {

	// stream 파일로부터 최대 count-1개의 문자 읽어서 str 문자 배열에 저장
	// 줄바꿈 문자까지 읽어온 경우에는 문자열의 끝에는 줄바꿈 문자가 포함
	// 에러가 발생하거나 EOF를 만나면 NULL 리턴
	// stream 매개변수에 stdin지정하면 표준 입력 스트림에서 문자열 읽어옴
	char* fgets(char* str, int count, FILE * stream);


	// str 문자열을 stream 파일에 출력
	// stream 매개변수에 stdout을 지저하면 표준 출력 스트림으로 문자열 출력
	// 문자열만 출력
	int fputs(const char* str, FILE * stream);


	// 텍스트 파일의 백업 파일 생성 //
	char in_fname[128] = "";
	char out_fname[128] = "";
	FILE* fin = NULL;
	FILE* fout = NULL;
	char str[BUFSIZE];

	printf("파일 이름? ");
	gets_s(in_fname, sizeof(in_fname));
	fin = fopen(in_fname, "r");

	if (fin == NULL) {
		printf("%s 파일 열기 실패\n", in_fname);
		return 1;
	}

	strcpy(out_fname, in_fname);
	strcat(out_fname, ".bak");
	fout = fopen(out_fname, "w");
	if (fout == NULL) {
		printf("%s 파일 열기 실패\n", out_fname);
		fclose(fin);
		return 1;
	}

	while (fgets(str, sizeof(str), fin) != NULL)
		fputs(str, fout);
	fclose(fin);
	fclose(fout);
	printf("파일 백업 성공: %s로 백업했습니다\n", out_fname);
}