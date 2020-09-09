#include <stdio.h>

//C Program to Check Whether a Number is Positive or Negative
//Enter a number: 12.3
//You entered a positive number.||You entered 0.

int main(void)
{

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num == 0)
    {
        printf("You entered 0.");
    }
    if (num > 0)
    {
        printf("%lf is positive.", num);
    }
    else if (num < 0)
    {
        printf("%lf is negative.", num);
    }
}
