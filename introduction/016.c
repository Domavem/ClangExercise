//C Program to Check Whether a Character is an Alphabet or not
//Enter a character: *
//* is not an alphabet
#include <stdio.h>

int main(void)
{

    // char alphabet;
    // printf("Enter a character:");
    // scanf("%c", &alphabet);

    // if (97 <= "% d" <= 122 || 65 <= "% d" <= 90, alphabet)
    // {
    //     printf("%c is an alphabet.", alphabet);
    // }
    // else
    // {
    //     printf("%c is not an alphabet.", alphabet);
    // }
    char alphabet;
    printf("Enter an alphabet:");
    scanf("%c", &alphabet);

    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
        printf("%c is an alphabet.", alphabet);

    else
        printf("%c is not an alphabet", alphabet);
}