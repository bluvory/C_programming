# include <stdio.h>

struct song {
	char name[20];
	char artist[20];
	char genre[20];
};

enum genre { ballad, hiphop, soul, dance, pop };

int main(void) {

	enum genre b = ballad;
	enum genre s = soul;
	enum genre p = pop;

	struct song songs[3] = { {"������", "������", 0}, {"���� ��", "�����ī��", 2}, {"Sixteen", "Ellie Goulding", 4} };

	printf("����\t��Ƽ��Ʈ\t�帣\n");
	for (int i = 0; i < 3; i++) {

		printf("%s\t%s\t%s\n", songs[i].name, songs[i].artist, songs[i].genre);

		switch(songs[i].genre) {
			case 'b':
				printf("ballad\n");
				break;
			case 's':
				printf("soul\n");
				break;
			case 'p':
				printf("pop\n");
				break;
		}
	}
}