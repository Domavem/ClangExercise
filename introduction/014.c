#include <stdio.h>
//C Program to Check Leap Year
//Enter a year: 1900
//1900 is not a leap year.

int main(void)
{

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0 || year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
}