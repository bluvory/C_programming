# include <stdio.h>

int istime(char* str) {

	if (str[0] - '0' > 1 && str[1] - '0' > 4 || str[2] - '0' > 6 || str[4] - '0' > 6)
		return 1;
	else
		return 0;

}

int main(void) {

	char str[7];
	int res;

	while (1) {
		
		printf("�ð�(.�Է� �� ����)? ");
		gets(str);

		res = istime(str);
		if (str[0] == '.')
			break;

		else if (res == 1)
			printf("�߸� �Է��߽��ϴ�. hhmmss�������� �Է��ϼ���.\n");
		else
			printf("%c%c:%c%c:%c%c�� ��ȿ�� �ð��Դϴ�.\n", str[0], str[1], str[2], str[3], str[4], str[5]);

	}
	
}