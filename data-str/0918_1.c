//250918
//1-7 ����

#include <stdio.h>

int main(void)
{
    int n;

    puts("1���� n������ ������ ���մϴ�.");

    printf("n��: ");
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

    printf("while-1���� %d������ ������ %d�Դϴ�.\n", n, sum);
    printf("for-1���� %d������ ������ %d�Դϴ�.\n", n, sum2);

    return 0;
    
}
