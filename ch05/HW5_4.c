// ���� 184�� 11��

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num;
	int cnt=0;

	printf("���� ����? ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cnt++;
	}

	if (cnt == 2) printf("%d�� �Ҽ��Դϴ�.", num);
	else printf("%d�� �Ҽ��� �ƴմϴ�.", num);

}