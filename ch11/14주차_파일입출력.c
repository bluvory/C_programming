# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int state;
	FILE* fp;
	char ch;

	// file open
	// r: �Է¿� �ؽ�Ʈ ���� ����
	// wb: ��¿� 2�� ���� ����
	fp = fopen("data.txt", "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;     // �� �̻� ����� �������� �ʵ��� ó��
	}

	ch = getc(fp);
	while (!feof(fp)) {    // fp�� ������ ���� �ٴٸ���
		putc(ch, stdout);  // fp2�� ��� ���� ����Ʈ (stdout:ǥ����½�Ʈ��)
		ch = getc(fp);
	}

	// file close
	state = fclose(fp);
	/*
	if (state != 0) {
		printf("file close error");
		return 1;
	}
	*/

	return 0;
}