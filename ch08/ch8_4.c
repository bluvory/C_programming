# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int num[5] = { 1,2,3,4,5 };
	int* p = num;
	int sum1=0, sum2=0, sum3=0;

	// ver1. �迭 �̿�
	for (int i = 0; i < 5; i++)
		sum1 += num[i];
	printf("�迭 �̿��� sum: %d\n", sum1);

	// ver2. *(p+i) �̿�
	for (int i = 0; i < 5; i++) {
		sum2 += *(p + i);
	}
	printf("*(p+i) �̿��� sum: %d\n", sum2);

	// ver3. *p++
	for (int i = 0; i < 5; i++) {
		sum3 += *p;
		*p++;
	}
	printf("*p++ �̿��� sum: %d\n", sum2);
}