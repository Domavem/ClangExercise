// C Program to Reverse a Number
// Enter an integer: 2345
// Reversed number = 5432

#include <stdio.h>

int main(void)
{

    int n, rev = 0, remainder;

    printf("Enter an interger:");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }

    printf("Reveresed numver = %d", rev);
}