# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	char ch;

	printf("Enter the character: ");
	scanf("%c", &ch);

	if ('0' <= ch && ch <= '9') printf("%c is number", ch);
	else if ('A' <= ch && ch<= 'Z') printf("%c is upper case", ch);
	else if ('a' <= ch && ch <= 'z') printf("%c is lower case", ch);
	else printf("%c is sign", ch);
}