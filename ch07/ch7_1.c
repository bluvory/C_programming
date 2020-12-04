# include <stdio.h>
# pragma warning (disable:4996)

int main(void) {

	int arr[10];
	int n, d;

	printf("첫 번째 항? ");
	scanf("%d", &n);
	printf("공차? ");
	scanf("%d", &d);

	for (int i = 0; i < 10; i++)
		arr[i] = n + d * i;

	printf("등차수열: ");
	for (int i = 0; i < 10; i++) 
		printf("%d ", arr[i]);
	
}