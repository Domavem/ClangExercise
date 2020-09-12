//C Program to Display Fibonacci Sequence
//Enter the number of terms: 10
//Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
#include <stdio.h>

int main(void)
{

    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the numver of terms:");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {

        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}