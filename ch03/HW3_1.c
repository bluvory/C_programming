# include <stdio.h>
# pragma warning (disable:4996)
# define use 190

int main(void) {

	int W, monW;

	printf("�⺻���? ");
	scanf("%d", &W);

	printf("�� ��뷮(kWh)? ");
	scanf("%d", &monW);

	W += monW * use;

	printf("������: %d��", W);

}

// ��ȣ ������, ���, ���մ��Կ�����