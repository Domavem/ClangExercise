//C Program to Display Prime Numbers Between Intervals Using Function
// Enter two positive integers: 12
// 30
// Prime numbers between 12 and 30 are: 13 17 19 23 29

#include <stdio.h>

int checkPirmeNumber(int n); //function prototyping 함

int main()
{
    int n1, n2, i, flag;
    printf("Enter two positive intergers:");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are:", n1, n2);
    for (i = n1 + 1; i < n2; ++i) // i 는 n1에 일씩더해 올라가면서 n2 직전까지 올라간다. 그래서 n1~n2 사이를 훝는다.
    {
        flag = checkPrimeNumber(i); // n1 과 n2 사이에 있는 i 가 프라임인지 찾는중,

        if (flag == 1) // flag 가 1이다? 그럼 프린트 함.
        {
            printf("%d", i);
        }
    } //이 for 루프를 훝으며 차례차례 프라임이 프린트됨.
    return 0;
}

int checkPrimeNumber(int n) //int 타입을 리턴하는 함수 만듬
{
    int j, flag = 1;

    for (j = 2; j <= n / 2; ++j) //입력숫자 n 이 2로나눳을때 2보다 클동안 (2보다 작다면 안된다)
    {
        if (n % j == 0) // 만약 2로 나눠떨어진다면? 아니다.
        {
            flag = 0;
            break; //그래서 멈춤
        }
    }

    return flag; //flag 가 1일때
}