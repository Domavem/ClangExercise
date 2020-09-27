// C Program to Add Two Distances (in inch-feet system) using Structures
// Enter 1st distance
// Enter feet: 23
// Enter inch: 8.6

// Enter 2nd distance
// Enter feet: 34
// Enter inch: 2.4

// Sum of distances = 57'-11.0"

#include <stdio.h>

struct Distance
{

    int feet;
    float inch;
} d1, d2, result; //Distance 스트럭쳐에 feet inch 있고 변수 d1 d2 result

int main()
{

    printf("Enter first distance\n");
    printf("Enter feet:");
    scanf("%d", &d1.feet);
    printf("Enter inch:");
    scanf("%f", &d1.inch);

    printf("Enter second distance\n");
    printf("Enter feet:");
    scanf("%d", &d2.feet);
    printf("Enter inch:");
    scanf("%f", &d2.inch);

    while (result.inch >= 12.0)
    { //12인치는 1피트 이므로 12마다 피트로 빼준다
        result.inch = result.inch - 12.0;
        ++result.feet;
    }

    printf("sum of two distances= %d\' - %.2f\"", result.feet, result.inch); // 따옴표를 쓸때는 \를 꼭 붙인다
}