//250918
//�Է¹ް� �������� ��ȣ ����.

/*#include <stdio.h>

int main(void)
{
    int n;

    printf("����: ");
    scanf("%d", &n);

    if(n > 0)
        printf("����Դϴ�.\n");
    else if(n < 0)
        printf("�����Դϴ�.\n");
    else
        printf("0�Դϴ�.\n");

    return 0;
}*/


//1-7~8 ����

/*#include <stdio.h>

int main(void)
{
    int n;

    puts("1���� n������ ������ ���մϴ�.");

    printf("n��: ");
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
    printf("���콺�� ���� �˰������� ���� 1���� %d������ ������ %d�Դϴ�.\n", n, sum3);

    printf("while-1���� %d������ ������ %d�Դϴ�.\n", n, sum);
    printf("for-1���� %d������ ������ %d�Դϴ�.\n", n, sum2);

    return 0;
}*/

//1-10�ǽ�
/*#include <stdio.h>

int main(void)
{
    printf("----����ǥ----\n");

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
            printf("%d X %d = %3d", i, j, i * j);
        putchar('\n');
    }

    return 0;
}
*/

//1-11�ǽ�

//���� �ﰢ��
#include <stdio.h>

int main(void)
{
    int n;

    printf("�� �� �ﰢ���Դϱ�?: ");
    scanf("%d", &n);

    //���� �ﰢ��
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            putchar('*');
        putchar('\n');
    }

    //��� ���� �̵ �ﰢ���� ���
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