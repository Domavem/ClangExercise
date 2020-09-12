// C Program to Calculate the Sum of Natural Numbers
// Enter a positive integer: 100
// Sum = 5050
#include <stdio.h>

int main(void)
{

    int i, n, sum = 0;
    printf("Enter a positive interger:");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("%d", sum);
}
