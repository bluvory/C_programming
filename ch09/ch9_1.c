# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char fname[20];
	char ext[5];
	printf("���ϸ�? ");
	scanf("%s", fname);
	printf("Ȯ����? ");
	scanf("%s", ext);

	printf("��ü ���ϸ�: %s.%s", fname, ext);
}