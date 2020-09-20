# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	unsigned int data;
	unsigned int mask = 0xff;
	unsigned int masked_data;

	printf("16진수로 데이터를 입력하세요: ");
	scanf("%x", &data);

	masked_data = data & mask;
	printf("byte 0 : %x", masked_data);

	masked_data = (data<<2) & mask;
	printf("\nbyte 1 : %x", masked_data);

	masked_data = data & (mask<<5);
	printf("\nbyte 2 : %x", masked_data);

	masked_data = data & 0xff;
	printf("\nbyte 3 : %x", masked_data);

}