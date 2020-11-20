# include <stdio.h>
# include <string.h>
# include <ctype.h>
# pragma warning (disable:4996)

int main(void) {

	char s[10];
	printf("문자열? ");
	gets_s(s, sizeof(s));

	int str = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (isalpha(s[i])) {
			str++;
			if (islower(s[i])) toupper(s[i]);
			if (isupper(s[i])) tolower(s[i]);
		}
	}

	printf("문자열의 개수: %d\n", str);
	printf("대소문자 변경: %s\n", s);
		
	
	// getchar();
	// putchar(c)
	// scanf : 공백을 만날때까지만 가져옴
	// gets : 공백까지 읽어옴


}