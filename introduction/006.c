#include <stdio.h>
//Enter dividend: 25
//Enter divisor: 4
//Quotient = 6
//Remainder = 1

int main(void)
{

    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend - divisor * quotient;
    printf("Quotient =  %d\n", quotient);
    printf("Remainder = %d\n", remainder);
}