# include <stdio.h>

int main(void) {

	while (1) {

		char key[10];
		printf("키워드(제목/아티스트)? ");
		gets("%s", key);

		if (key == '.')
			break;


	}
}