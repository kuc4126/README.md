//202530208 ����ä 1002����

#include <stdio.h>
#include <stdlib.h>

/*
// �迭 ��Ҹ� �������� �����ϴ� ���α׷� >���� �߿�X

#include <stdio.h>
#include <stdlib.h>         // calloc ������ ���°�


int main(void) {
    int nx;

    printf("��� ����: ");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));
    for(int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);
    printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
    for(int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    free(x);

    return 0;
}

//2-8 ��ȭ������ ��� ��ȯ�� ���� �ڵ�� ���� �߿�X ������ �߿�
int main(void)
{
    puts("10������ ��� ��ȯ�մϴ�.");

    int retry;

    do{
        unsigned no;
        int cd;
        char cno[512];

        printf("��ȯ�ϴ� ���� �ƴ� ����: ");
        scanf("%u", &no);

    do
    {
        printf("� ������ ��ȯ�ұ��?(2-36): ");
        scanf("%u", &cd);
    } while (cd < 2 || cd > 36);

    int dno = card_conv(no, cd, cno);

    printf("%d�����δ�", cd);
    for (int i = 0; i < dno; i++)
        printf("%c", cno[i]);
    printf("�Դϴ�\n");

    printf("�� �� �� �ұ��?(1...��/0...�ƴϿ�): ");
    scanf("%d", &retry);            
        } while (retry == 1);

    return 0;
    }

//2-9�ǽ� �Ҽ� ����_1  <�߿�

int main(void){
    unsigned long counter = 0;
    for (int n = 2; n <= 1000; n++)
    {
        int i;
        for (i = 2; i < n; i++)
        {
            counter++;
            if (n % i == 0)
                break;            
        }
        if (n == i)
            printf("%d\n", n);       
    }
    printf("�������� ������ Ƚ��: %lu\n", counter);

    return 0;    
}

//2-10�ǽ� �Ҽ� ����_2

int main(void)
{
    int prime[500];
    int ptr = 0;
    unsigned lond counter = 0;
    prime[ptr++] = 2;
    for (int n = 3; n <= 1000; n+= 2){
        int i;
        for (i = 1; i < ptr; i++){
            counter++;
            if (n%prime[i]==0)
                break;            
        }
        if (ptr == i)
            prime[ptr++] = n;       
    }
    for (int i = 0; i < ptr; i++)
        printf("%d\n", prime[i]);
    printf("�������� ������ Ƚ��: %lu\n", counter);

    return 0;   
}*/