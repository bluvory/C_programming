// 7�� ��������12

# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int std[5][5] = { { 28,28,26,9,91 },{30,27,30,10,97},{25,26,24,8,83},{18,22,22,5,67},{24,25,30,10,89}};
	float avg[5];

	printf("\t\t�߰�\t�⸻\t����\t�⼮\t����\n");
	for (int i = 0; i < 5; i++) {
		printf("�� ��   %d��: ", i+1);
		for (int j = 0; j < 5; j++) {
			printf("\t%d", std[i][j]);
		}
		printf("\n");
	}

	printf("�׸� ���: ");
	for (int i = 0; i < 5; i++) {
		float stdavg = 0;

		for (int j = 0; j < 5; j++) {
			stdavg += std[j][i];
		}
		float savg = stdavg / 5;
		avg[i] = savg;

		printf("\t%.1f ", avg[i]);
	}

}