#include <stdio.h>
//Enter two numbers: 2.4
//1.12
//Product = 2.69

int main(void)
{
    float num1, num2, product;
    printf("Enter two nubers: ");
    scanf("%lf %lf", &num1, &num2);

    product = num1 * num2;

    printf("Product = %.2lf", product);
}