# include <stdio.h>
# include <conio.h>
# pragma warning (disable:4996)

// ���� �����: fgetc, fputc
// ���ڿ� �����: fgets, fputs
// ����ȭ�� �����: fscanf, fprintf

int main(void) {

	// stream�� stdin�̸� ǥ�� �Է� ��Ʈ������ ���� �ϳ� �о��
	// stream�� ���������͸� ���Ͽ��� ���� �ϳ� �о��
	int fgetc(FILE * stream);

	// stream�� stdout�̸� ǥ�� �Է� ��Ʈ������ ���� �ϳ� ���
	// stream�� ���������͸� ���Ͽ��� ���� �ϳ� ���
	int fputc(int ch, FILE * stream);


	// �ܼ� �Է��� ���Ϸ� �����ϱ� //
	FILE* fp = NULL;
	int ch;
	fp = fopen("a.txt", "w");
	if (fp == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}

	// ǥ�� �Է¿��� ���� �ϳ��� �о ���Ͽ� ����
	while (ch = fgetc(stdin) != EOF)
		fputc(ch, fp);

	fclose(ch, fp);


	// ������ ������ �ֿܼ� ����ϱ� //
	FILE* fp2 = NULL;
	int ch2;

	fp2 = fopen("fgetc_test.c", "r");
	if (fp2 == NULL) {
		printf("���� ���� ����\n");
		return 1;
	}
	while ((ch = fgetc(fp2)) != EOF)
		fputc(ch2, stdout);
	fclose(fp2);
}