# include <stdio.h>
# include <string.h>
# pragma warning (disable:4996)

int main(void) {

	char str[10];
	char* p = str;
	int strsum=0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);

	// str�� len ���ϱ�
	int n = strlen(str);

	for (int i = 0; i < n; i++) {
		if ('0' <= str[i] && str[i] <= '9')
			strsum += str[i] - '0';
	}
	printf("%d\n", n);
	printf("%d\n", strsum);


}