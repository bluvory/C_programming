# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning (disable:4996)

int main(void) {

	int cnt = 0;
	for (int i=1;i<=5;i++) {

		srand(time(NULL));

		int n1 = rand() % 9 + 1;
		int n2 = rand() % 9 + 1;
		int ans;

		printf("%d + %d = ", n1, n2);
		scanf("%d", &ans);
		if (ans == n1 + n2) printf("맞았습니다.");
		else printf("틀렸습니다.");
		printf("\n");

	}
}