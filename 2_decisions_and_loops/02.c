#include <stdio.h>

//Enter an alphabet: G
//G is a consonant.

int main(void)
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", c);

    if (c == 'a', 'e', 'i', 'o', 'u')
    {
        printf("%c is a vowel");
    }
    else
    {
        printf("%c is a consonant.");
    }
}
