#include <stdio.h>

//Size of int: 4 bytes
//Size of float: 4 bytes
//Size of double: 8 bytes
//Size of char: 1 byte

int main(void)
{

    int int_num;
    float float_num;
    double double_num;
    char char_num;

    printf("Size of int: %d bytes\n", sizeof(int_num));
    printf("Size of int: %d bytes\n", sizeof(float_num));
    printf("Size of int: %d bytes\n", sizeof(double_num));
    printf("Size of int: %d bytes\n", sizeof(char_num));
}