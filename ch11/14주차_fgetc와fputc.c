# include <stdio.h>
# include <conio.h>
# pragma warning (disable:4996)

// 문자 입출력: fgetc, fputc
// 문자열 입출력: fgets, fputs
// 형식화된 입출력: fscanf, fprintf

int main(void) {

	// stream이 stdin이면 표준 입력 스트림에서 문자 하나 읽어옴
	// stream이 파일포인터면 파일에서 문자 하나 읽어옴
	int fgetc(FILE * stream);

	// stream이 stdout이면 표준 입력 스트림에서 문자 하나 출력
	// stream이 파일포인터면 파일에서 문자 하나 출력
	int fputc(int ch, FILE * stream);


	// 콘솔 입력을 파일로 저장하기 //
	FILE* fp = NULL;
	int ch;
	fp = fopen("a.txt", "w");
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}

	// 표준 입력에서 문자 하나를 읽어서 파일에 저장
	while (ch = fgetc(stdin) != EOF)
		fputc(ch, fp);

	fclose(ch, fp);


	// 파일의 내용을 콘솔에 출력하기 //
	FILE* fp2 = NULL;
	int ch2;

	fp2 = fopen("fgetc_test.c", "r");
	if (fp2 == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	while ((ch = fgetc(fp2)) != EOF)
		fputc(ch2, stdout);
	fclose(fp2);
}