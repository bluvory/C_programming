# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10];
	int n, d;

	printf("ù ��° ��? ");
	scanf("%d", &n);
	printf("����? ");
	scanf("%d", &d);

	for (int i = 0; i < 10; i++)
		arr[i] = n + d * i;

	printf("��������: ");
	for (int i = 0; i < 10; i++) 
		printf("%d ", arr[i]);
	
}