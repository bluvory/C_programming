# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10] = { 23,45,62,12,99,83,23,50,12,37 };
	int key;

	printf("�迭: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\nã�� ��? ");
	scanf("%d", &key);

	int k = 9;
	while (k >= 0) {
		if (arr[k] == key) {
			printf("%d�� %d��° �����Դϴ�", key, k);
			break;
		}
		k--;
	}
	if (k == 9)
		printf("���� ���� ���� ���Ҹ� ã�� �� �����ϴ�");

}