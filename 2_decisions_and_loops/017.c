// C Program to Calculate the Power of a Number
// Enter a base number: 3
// Enter an exponent: 4
// Answer = 81
#include <stdio.h>

int main()
{

    int base, exp;
    long long result = 1;

    printf("Enter a base number:");
    scanf("%d", &base);
    printf("Enter an exponent:");
    scanf("%d", &exp);

    while (exp != 0)
    {
        result = result * base; //베이스가 루프 돌아가면서 한번씩 곱해지는데
        --exp;                  //exponent 가 0일때까지 곱해진다.
    }
    printf("Answer = %lld", result);
    return 0;
}

// or just use pow() power function and #include<math.h>