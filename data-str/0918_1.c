//250918���ǳ�¥
//1-7 ����

#include <stdio.h>

int main(void)
{
    int n;

    putc("1���� n������ ������ ���մϴ�.");

    printf("n��: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("1���� %d������ ������ %d�Դϴ�.\n", n, sum);

    return 0;
    
}
