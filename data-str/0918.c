//250918강의날짜
//입력받고 정수값의 부호 판정.

/*#include <stdio.h>

int main(void)
{
    int n;

    printf("정수: ");
    scanf("%d", &n);

    if(n > 0)
        printf("양수입니다.\n");
    else if(n < 0)
        printf("음수입니다.\n");
    else
        printf("0입니다.\n");

    return 0;
}*/


//1-7 예재

#include <stdio.h>

int main(void)
{
    int n;

    puts("1부터 n까지의 총합을 구합니다.");

    printf("n값: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    int sum2 = 0;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    for (int j = 1; j <= n; j++)
    {
        sum2 += j;
    }

    printf("while-1부터 %d까지의 총합은 %d입니다.\n", n, sum);
    printf("for-1부터 %d까지의 총합은 %d입니다.\n", n, sum2);

    return 0;
}