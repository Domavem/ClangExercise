//C Program to Find LCM of two Numbers
//Enter two positive integers: 72
//120
//The LCM of 72 and 120 is 360.

#include <stdio.h>

int main(void)
{

    int n1, n2, i, gcd, lcm;

    printf("Enter two prositive intergers:"); //정수 두개 입력
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    { // i가 n1이하 n2이하 일때 까지만

        if (n1 % i == 0 && n2 % i == 0)
        {
            // 둘다 i로 나눳을때  딱 떨어진다면?
            gcd = i; //최대공배수는는 i 이군
        }
    }

    lcm = (n1 * n2) / gcd; // 최소공배수는 두 수의 곱을 최대공약수로 나눈것

    printf("The LCM ot two numbers: %d", lcm);
}
