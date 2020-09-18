#include <stdio.h>

//Enter an integer: -7
//-7 is odd.

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("% d", num);

    if (num / 2 == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }
}
