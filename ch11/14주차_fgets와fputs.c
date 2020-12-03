# include <stdio.h>
# include <conio.h>
# pragma warning (disable:4996)
# define BUFSIZE 512

// ���� �����: fgetc, fputc
// ���ڿ� �����: fgets, fputs
// ����ȭ�� �����: fscanf, fprintf

int main(void) {

	// stream ���Ϸκ��� �ִ� count-1���� ���� �о str ���� �迭�� ����
	// �ٹٲ� ���ڱ��� �о�� ��쿡�� ���ڿ��� ������ �ٹٲ� ���ڰ� ����
	// ������ �߻��ϰų� EOF�� ������ NULL ����
	// stream �Ű������� stdin�����ϸ� ǥ�� �Է� ��Ʈ������ ���ڿ� �о��
	char* fgets(char* str, int count, FILE * stream);


	// str ���ڿ��� stream ���Ͽ� ���
	// stream �Ű������� stdout�� �����ϸ� ǥ�� ��� ��Ʈ������ ���ڿ� ���
	// ���ڿ��� ���
	int fputs(const char* str, FILE * stream);


	// �ؽ�Ʈ ������ ��� ���� ���� //
	char in_fname[128] = "";
	char out_fname[128] = "";
	FILE* fin = NULL;
	FILE* fout = NULL;
	char str[BUFSIZE];

	printf("���� �̸�? ");
	gets_s(in_fname, sizeof(in_fname));
	fin = fopen(in_fname, "r");

	if (fin == NULL) {
		printf("%s ���� ���� ����\n", in_fname);
		return 1;
	}

	strcpy(out_fname, in_fname);
	strcat(out_fname, ".bak");
	fout = fopen(out_fname, "w");
	if (fout == NULL) {
		printf("%s ���� ���� ����\n", out_fname);
		fclose(fin);
		return 1;
	}

	while (fgets(str, sizeof(str), fin) != NULL)
		fputs(str, fout);
	fclose(fin);
	fclose(fout);
	printf("���� ��� ����: %s�� ����߽��ϴ�\n", out_fname);
}