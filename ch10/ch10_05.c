# include <stdio.h>
# pragma warning (disable:4996)

struct product {
	char name[20];
	int price;
	int inv;
};

void print_product(struct product* p) {
	printf("[%s %d�� ���:%d]", p->name, p->price, p->inv);
}

int main(void) {

	struct product product1;
	struct product* p = &product1;

	printf("��ǰ��? ");
	scanf("%s", product1.name);
	printf("����? ");
	scanf("%d", &product1.price);
	printf("���? ");
	scanf("%d", &product1.inv);

	print_product(p);
}