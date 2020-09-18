#include <stdio.h>
//Enter first number: 1.20
//Enter second number: 2.45

//After swapping, firstNumber = 2.45
//After swapping, secondNumber = 1.20

void swap(int numA, int numB);

int main(void)
{

    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", num1);
    printf("Enter second number: ");
    scanf("%d", num2);
    10

        swap(&num1, &num2); //void function called here with main's variables

    printf("After swapping, firstNumber =%d", num1);
    printf("After swapping, SecondNumber =%d", num2);
}

void swap(int *numA, int *numB) //position swap in memory
{

    int temp = *numA; //temp has num1(10 in main)
    *numA = *numB;    //numA has num2(20 in main)
    *numB = temp;     //numB has temp(num1 which is 10 in main -first line)
}