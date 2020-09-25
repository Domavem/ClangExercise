// C Program to Find Largest Element in an Array
// Enter the number of elements (1 to 100): 5
// Enter number1: 34.5
// Enter number2: 2.4
// Enter number3: -35.5
// Enter number4: 38.7
// Enter number5: 24.5
// Largest element = 38.70

int main()
{

    int i, n;
    float arr[100];
    printf("Enter the number of elements:");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter number%d", i + 1); //어레이 숫자에 일 더해서
        scanf("%f", &arr[i]);            //그만큼 확보
    }

    for (i = 1; i < n; ++i)
    {
        if (arr[0 < arr[i]])
            arr[0] = arr[i];
    }

    printf("Largest element = %.2f", arr[0]);

    return 0;
}
