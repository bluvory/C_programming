# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char a;

	printf("Enter the character");
	scnaf("%c", &a);

	if (a == "K" || a == "k") {
		printf("KBS�̴�.");
	}

	else if (a == "M" || a == "m") {
		printf("MBC�̴�.");
	}

}