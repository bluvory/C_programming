# include <stdio.h>
# include <string.h>
# pragma warning (disable:4996)

// ��, �� �ʿ� �ش��ϴ� �������� �Ű������� ���޹޾�
// hh:mm:ss ������ ���ڿ��� ����� ����

int time(int h, int m, int s, char*str) {

    if (h > 24 || h < 1 || m>59 || m < 1 || s>59 || s < 1)
        return -1;

    else {
        str[0] = h / 10 + '0';
        str[1] = h % 10 + '0';
        str[2] = ':';
        str[3] = m / 10 + '0';
        str[4] = m % 10 + '0';
        str[5] = ':';
        str[6] = s / 10 + '0';
        str[7] = s % 10 + '0';
        str[8] = '\0';

        int strlength = strlen(str);
        return strlength;
    }

}

int main(void) {

    int h, m, s;
    printf("�� �� ��? ");
    scanf("%d %d %d", &h, &m, &s);

    char *strt[8];
    int timelen = time(h, m, s, strt);
    if (timelen == -1)
        printf("�ð��� �߸� �ԷµǾ����ϴ�.");
    else
        printf("%s", strt);

}