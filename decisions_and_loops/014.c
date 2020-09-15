//C Program to Display Characters from A to Z Using Loop
// Enter u to display uppercase alphabets.
// Enter l to display lowercase alphabets. l
// a b c d e f g h i j k l m n o p q r s t u v w x y z

#include <stdio.h>

int main(void)
{

    char c;

    printf("Enter u to display uppercase alphabets. \n Enter l to display lowercase alphabets.");

    scanf("%c", &c);

    if (c == 'U' || c == 'u')
    {

        for (c = 'A'; c <= 'Z'; c++)
            printf("%c", c);
    }
    else if (c == 'L' || c == 'l')
    {

        for (c = 'a'; c <= 'z'; c++)

            printf("%c", c);
    }
    else
    {
        printf("Error! you entered an invalid character");
    }
}