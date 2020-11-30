# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning (disable:4996)

int main(void) {

    srand(time(NULL));
    int n1 = rand() % 10;
    int n2 = rand() % 10;
    int a, ans, res;

    if (n1 < n2) {
        a = n1; n1 = n2; n2 = a;
    }
    
    printf("What is %d - %d? ", n1, n2);
    scanf("%d", &ans);

    res = n1 - n2;
    if (ans == res) printf("You are correct!");
    else printf("Your answer is wrong\n%d - %d should be %d", n1, n2, res);

 }