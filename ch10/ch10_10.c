# include <stdio.h>
# pragma warning (disable:4996)

struct rect {
	int x1, y1, x2, y2;
};

int normalize(struct rect* p) {

	int tmp_x, tmp_y;
	for (int i = 0; i < 3; i++) {

		if (p[i].x1 > p[i].x2) {
			tmp_x = p[i].x2;
			p[i].x2 = p[i].x1;
			p[i].x1 = tmp_x;
			tmp_y = p[i].y2;
			p[i].y2 = p[i].y1;
			p[i].y1 = tmp_y;

		}
	}
}

int mean_rect(struct rect* p) {

	int mean[6];
	for (int i = 0; i < 3; i++) {
		mean[i*2] = (p[i].x1 + p[i].x2) / 2;
		mean[i * 2 + 1] = (p[i].y1 + p[i].y2) / 2;
	}

	int* pm = &mean;
	return pm;
}

int main(void) {

	struct rect rect1[3] = { {5,7,55,77},{10,20,30,60},{55,11,88,36} };
	struct rect* p = &rect1;

	normalize(p);

	int* pm = mean_rect(p);

	// for문 안돌아감
	int i = 0;
	printf("[RECT 좌하단점:(%d, %d) 우상단점: (%d, %d)]\t중심점: (%d, %d)\n", rect1[i].x1, rect1[i].y1, rect1[i].x2, rect1[i].y2, pm[i * 2], pm[i * 2 + 1]);

}
