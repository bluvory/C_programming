# include <stdio.h>
# pragma warning (disable:4996)

// 문자열 받아서 문자열안의 숫자의 총합 구하기

int main(void) {

	char str[10];
	int strsum = 0;

	printf("문자열 입력: ");
	scanf("%s", str);

	for (int i = 0; str[i]!='\0'; i++) {
		if ('0' <= str[i] && str[i] <= '9')
			strsum += str[i] - '0';
	}
	printf("%d\n", strsum);

	// 포인터로
	char* p = str;
	int strsum_p = 0;
	
	for (int i = 0; *p != '\0'; i++) {   // for (p=str; *p='\0'; p++) // while문도가능
		if ('0' <= *p && *p <= '9')
			strsum_p += *p -'0';
		*p++;
	}
	printf("%d\n", strsum_p);


}