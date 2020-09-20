// C Program to Find the Frequency of Characters in a String
// Enter a string: This website is awesome.
// Enter a character to find its frequency: e
// Frequency of e = 4

#include <stdio.h>

int main()
{

    char str[1000], ch;
    int count = 0;

    printf("Enter a string");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency:");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++count;
    }

    printf("frequency of %c = %d", ch, count);
    return 0;
}