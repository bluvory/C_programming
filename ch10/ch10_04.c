# include <stdio.h>
# pragma warning (disable:4996)

struct date {
	int year;
	int month;
	int day;
};

int isholi(struct date*p) {
	if (p->month == 8 && p->day == 15)
		return 0;
	else
		return 1;
}

int main(void) {

	struct date date1;
	struct date* p = &date1;
	int res;

	while (1) {
		printf("��¥(������)? ");
		scanf("%d %d %d", &date1.year, &date1.month, &date1.day);

		if (date1.year == 0 && date1.month == 0 && date1.day == 0)
			break;

		res = isholi(p);
		if (res == 0)
			printf("%d/%d/%d�� �������Դϴ�.\n", date1.year, date1.month, date1.day);
		else
			printf("%d/%d/%d�� �������� �ƴմϴ�.\n", date1.year, date1.month, date1.day);

	}

}