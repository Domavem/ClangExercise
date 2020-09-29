// C Program to Check Whether a Number is Palindrome or Not
// Enter an integer: 1001
// 1001 is a palindrome.

#include <stdio.h>

int main()
{

    int n, reversedN = 0, remainder, originalN;
    printf("Enter an interger:");
    scanf("%d", &n);
    originalN = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }

    if (originalN == reversedN)
    {
        printf("%d is a palindrome", originalN);
    }
    else
    {
        printf("%d is not a palindrome", originalN);
    }
    return 0;
}