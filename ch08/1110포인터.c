# include <stdio.h>
# pragma warning (disable:4996)
# include <stdlib.h>
# include <time.h>

void sum1(int);
void sum2(int);

int main(void) {

	int x = 7;
	//double d = 3.14;
	//int* p;
	//p = &x;
	//printf("%d %d\n", x, *p);
	//*p = 10;

	//printf("%d %d\n", x, *p);

	// 미션1
	int a=5, b=7;
	int* ap, * bp;
	ap = &a;
	bp = &b;
	printf("%d\n", *ap + *bp);

	// 미션2
	int c = 2, d = 3;
	int* cp, * dp;
	cp = &c;
	dp = &d;
	int cdsum = *cp * 5 + *dp * 5;
	printf("%d\n", cdsum);

	// 미션3
	int Aarray[5];
	int sum_arr = 0;
	int* p;
	p = Aarray;        // 배열명은 시작주소이기때문에 &를 앞에 써주지 않는다
	// p = &Aarray[0] 으로 해도 같은 의미

	for (int i = 0; i < 5; i++) {
		scanf("%d", &Aarray[i]);
		//sum_arr += Aarray[i];
		// sum_arr += Aarray[i];
		// sum_arr += *(Aarray+i);
		sum_arr += *p++;
	}
	
	printf("Aarray의 sum: %d\n", sum_arr);

	
	// 미션4
	int Barray[5];
	int Bmax = -1;
	int* b_add;
	b_add = &Barray;        // 배열명은 시작주소이기때문에 &를 앞에 써주지 않는다
	
    // p = &Aarray[0] 으로 해도 같은 의미

	for (int i = 0; i < 5; i++) {
		scanf("%d", &Barray[i]);
		if (*b_add > Bmax) {
			Bmax = *b_add;
		}
		b_add++;
	}

	printf("Barray의 max: %d\n", Bmax);


	// 미션5
	int n1 = 5, n2 = 6, sum = 0;
	sum1(n1, n2, sum);
	printf("%d ", sum);
	sum2(n1, n2, sum);
	printf("%d ", sum);
	int n3 = rand() % 10;
	int n4 = rand() % 10;
	swap(&a, &b);


	// 미션6
	int arr[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("max = %d", getmax());

	
	// 미션7
	int data[3][4] = { {1,2,3,4}, {11,12,13,14},{21,22,23,24} };
	int(*pdata)[4];
	pdata = data;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%3d", *(pdata[i] + j));
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			printf("%3d", *(*pdata + i) + j);
		printf("\n");
	}

	

}

// 미션5의 함수들
void sum1(int x, int y, int sum) {
	sum = x + y;
}
void sum2(int x, int y, int sum) {
	sum = x + y;
}

void swap(int* x, int* y) {
	int temp;
	if (*x < *y) {
		temp = *x;
		*x = *y;
		*y = temp;
	}
}
int getmax(int *p) {
	int max = *p;
	if (max < *p)
		max = *p;
	p++;
	return max;
}

int chnum(int x, int y) {
	int r;
	if (y > x) {
		r = x;
		x = y;
		y = r;
	}

}
