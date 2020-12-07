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

	struct song songs[3] = { {"밤편지", "아이유", 0}, {"서울 밤", "어반자카파", 2}, {"Sixteen", "Ellie Goulding", 4} };

	printf("제목\t아티스트\t장르\n");
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