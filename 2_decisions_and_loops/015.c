//C Program to Count Number of Digits in an Integer
// Enter an integer: 3452
// Number of digits: 4

int main(void)
{

    long long n;
    int count = 0;
    printf("Enter an interger:");
    scanf("%lld", &n);

    while (n != 0) //n이 일때까지~
    {
        n = n / 10; //n 을 십씩 나눈다. 그럼 3234 에서 323이 되고, 323.xx  에서 32.xx 가 되고 자릿수가 줄어듬
        ++count;    //나눌때마다 카운드 프러스 일
    }

    printf("Number of digits: %d", count);
}