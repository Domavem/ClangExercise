// C Program to Demonstrate the Working of Keyword long
// Size of int = 4 bytes
// Size of long int = 8 bytes
// Size of long long int = 8 bytes
// Size of double = 8 bytes
// Size of long double = 16 bytes

#include <stdio.h>

int main()
{

    int a;
    long int b; //also long int b
    long long int c;
    double d;
    long double e;

    printf("size of int = %zu bytes\n", sizeof(a));
    printf("size of long int =  %zubytes\n", sizeof(b));
    f
        printf("size of long long int =  %zubytes\n", sizeof(c));
    printf("size of double =  %zubytes\n", sizeof(d));
    printf("size of long double =  %zubytes\n", sizeof(e));

    return (0);
}