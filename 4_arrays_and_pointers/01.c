// C Program to Calculate Average Using Arrays
// Enter the numbers of elements: 6
// 1. Enter number: 45.3
// 2. Enter number: 67.5
// 3. Enter number: -45.6
// 4. Enter number: 20.34
// 5. Enter number: 33
// 6. Enter number: 45.6
// Average = 27.69

#include <stdio.h>

int main()
{

    int n, i;                     //루프에 사용할 정수 n과 i
    float num[100], sum = 0, avg; //어레이 카운드는 최대 100, 루프에 사용할 sum 과 마지막에 나눌 avg

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1)
    {
        printf(" Error! number should in range of 1 to 100.\n"); //1-100 사이 정수가 아니면 다시 프롬트
        printf("Enter numver again:");

        scanf("%d", &n);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d. Enter number:", i + 1);
        scanf("%f", &num[i]);
        sum = sum + num[i];
    }

    avg = sum / n;
    printf("Average: %.2f", avg);
    return 0;
}