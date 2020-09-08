#include <stdio.h>

//In this example, you will learn to find the largest number among the three numbers entered by the user.
//Enter three numbers: -4.5
//3.9
//5.6
//5.60 is the largest number.

int main()
{

    double num1, num2, num3;
    printf("Enter three numbers: ");

    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3 /* num1>num2 and num3*/)
    {
        printf("%.1lf is the largest number.", num1);
    }
    if (num2 > num1 && num2 > num3 /* num2> num1 and num3*/)
    {
        printf(".1%lf is the largest number.", num2);
    }
    if (num3 > num1 && num3 > num2 /* num3> num1 and num2*/) //this can also end with a single else line, as if above are false num
    {
        printf("%.1lf is the largest number.", num3);
    }
}