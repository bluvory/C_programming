# include <stdio.h>
# include <ctype.h>
# pragma warning (disable:4996)

int main(void) {

	char name[20];
	printf("ÆÄÀÏ¸í? ");
	gets(name);

	FILE* fp;
	fp = fopen(name, "rt");
	if (fp == NULL) {
		printf("file open error!\n");
		return 1;
	}

	char ch = getc(fp);
	int counts[26] = { 0, }, i;

	
	while (!feof(fp)) {
		ch = getc(fp);
		if ('a' <= tolower(ch) && tolower(ch) <= 'z')
			counts[tolower(ch) - 'a']++;

	}

	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0)
			printf("%c:%d\n", 'a' + i, counts[i]);
	}

	int state = fclose(fp);

	return 0;
}