# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10] = { 23,45,62,12,99,83,23,50,12,37 };
	int key;

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n찾을 값? ");
	scanf("%d", &key);

	int k = 9;
	while (k >= 0) {
		if (arr[k] == key) {
			printf("%d는 %d번째 원소입니다", key, k);
			break;
		}
		k--;
	}
	if (k == 9)
		printf("같은 값을 가진 원소를 찾을 수 없습니다");

}