# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char ch;

	for (int i = 1; i <= 5; i++) {
		printf("�ҹ��ڸ� �Է��Ͻÿ�:");
		scanf(" %c", &ch);
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.", ch-32);
		printf("\n");
	}
}