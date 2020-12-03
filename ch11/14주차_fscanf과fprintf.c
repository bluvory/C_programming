# include <stdio.h>
# include <string.h>
# pragma warning (disable:4996)

// ���� �����: fgetc, fputc
// ���ڿ� �����: fgets, fputs
// ����ȭ�� �����: fscanf, fprintf


// stream�� stdout�̸� �ֿܼ�, ���� �����͸� ���Ͽ� ���
void print_array(const int arr[], int size, FILE* stream) {
	for (int i = 0; i < size; i++)
		fprintf(stream, "%2d", arr[i]);
	fprintf(stream, "\n");
}


int main(void) {

	// ���� ���ڿ��� �̿�
	int fscanf(FILE * stream, const char* format);
	int fprintf(FILE * stream, const char* format);


	// ���� �����͸� �Ű������� ���� �Լ� //
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size = sizeof(arr) / sizeof(arr[0]);
	char filename[128] = "";
	FILE* fp = NULL;

	printf("���� �̸�? ");
	gets_s(filename, sizeof(filename));
	fp = fopen(filename, "w");
	if (fp == NULL)
		fp = stdout;
	print_array(arr, size, fp);
	fclose(fp);
}