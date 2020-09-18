#include <stdio.h>

//Enter two integers: 12
//11
//12 + 11 = 23

int main(void)
{

    int num1;
    int num2;
    int sum;

    printf("Enter two intergers: "); //user prompt for input
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2; //takes two intergers
    printf("%d + %d = %d", num1, num2, sum);
}