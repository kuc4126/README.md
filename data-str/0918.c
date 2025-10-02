//250918
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


//1-7~8 예재

/*#include <stdio.h>

int main(void)
{
    int n;

    puts("1부터 n까지의 총합을 구합니다.");

    printf("n값: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;
    int sum2 = 0;
    int sum3 = 0;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    int j;
    for (j = 1; j <= n; j++)
    {
        sum2 += j;
    }

    sum3 = n * (n + 1) / 2;
    printf("가우스의 덧셈 알고리즘으로 구한 1부터 %d까지의 총합은 %d입니다.\n", n, sum3);

    printf("while-1부터 %d까지의 총합은 %d입니다.\n", n, sum);
    printf("for-1부터 %d까지의 총합은 %d입니다.\n", n, sum2);

    return 0;
}*/

//1-10실습
/*#include <stdio.h>

int main(void)
{
    printf("----곱셈표----\n");

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
            printf("%d X %d = %3d", i, j, i * j);
        putchar('\n');
    }

    return 0;
}
*/

//1-11실습

//직각 삼각형
#include <stdio.h>

int main(void)
{
    int n;

    printf("몇 단 삼각형입니까?: ");
    scanf("%d", &n);

    //직각 삼각형
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    //가운데 정렬 이등변 삼각형을 출력
    /*for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--)
            printf(" ");
        for (int j = 0; j < 2*i+1; j++)
            printf("*");
        printf("\n");
    }*/

    return 0;
}