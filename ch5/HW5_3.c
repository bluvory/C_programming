// ���� 184�� 10��

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {
	int kwh, total, base, elc;

	while (1) {

		printf("\n�� ��뷮 (KWh)? ");
		scanf("%d", &kwh);
		if (kwh == 0) break;

		if (kwh <= 300) {
			base = 1000;
			elc = kwh*100;
		}

		else {
			base = 5000;
			elc = kwh*100 + (kwh-300)*200;
		}

		total = base + elc;

		printf("���� ��� �հ�: %d", total);
		printf("\n  - �⺻���: %d", base);
		printf("\n- ���·����: %d", elc);
	}
}