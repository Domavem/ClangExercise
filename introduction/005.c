#include <stdio.h>

//Enter a character: G
//ASCII value of G = 71

int main(void)
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("ASCII value of %c = %d", c, c); //when %d is used, ASCII value is displayed.
}