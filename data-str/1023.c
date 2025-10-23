//202530208 ����ä
//10��23�� ����

//���� �˻�
/* 
#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
    int i=0;
    while (1)
    {
        if (1==n)
            return -1;

        if (a[1] == key)
            return i;
        i++;        
    }
    
}

int main(void)
{
    int nx, ky;
    puts("���� �˻�");
    printf("��� ����: ");
    scanf("%d", &nx);
    int*x=calloc(nx, sizeof(int));
    for (int i = 0; i < nx; i++)
        printf("�˻���: ");
        scanf("%d", &ky);
        int idx = search(x, nx, ky);
        if (idx == -1)
            puts("�˻��� �����߽��ϴ�.");
        else
            printf("%d (��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
        free(x);


        return 0;
        
    
}



// ���� �˻�(for ��)

#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(for ��)
int search(const int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (a[i] == key)
            return i;   // �˻� ����
    return -1;          // �˻� ����
}

int main(void)
{
    int nx, ky;

    puts("���� �˻�");
    printf("��� ���� : ");
    scanf("%d", &nx);

    int *x = calloc(nx, sizeof(int));   // ����� ������ nx�� int�� �迭�� ����
    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    printf("�˻��� �� : ");
    scanf("%d", &ky);

    int idx = search(x, nx, ky);        // �迭 x���� ���� ky�� ��Ҹ� ���� �˻�
    if (idx == -1)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);    // �迭 x�� ����
    return 0;
}




#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(for ��)
int search(const int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (a[i] == key)
            return i;   // �˻� ����
    return -1;          // �˻� ����
}

int main(void)
{
    int nx, ky;

    puts("���� �˻�(���ʹ�)");
    printf("��� ����: ");
    scanf("%d", &nx);

    int *x = calloc(nx + 1, sizeof(int));   // ����� ������ (nx + 1)�� int�� �迭
    for (int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("�˻��� ��: ");
    scanf("%d", &ky);

    int idx = search(x, nx, ky);            // �迭 x���� ���� ky�� ��Ҹ� ���� �˻�
    if (idx == -1)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);    // �迭 x�� ����
    return 0;
}



// ���� �˻�(���ʹ�)

#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�(���ʹ�)
int search(int a[], int n, int key)
{
    int i = 0;
    a[n] = key;     // ����(sentinel) �߰�

    while (1) {
        if (a[i] == key)   // ���ϴ� Ű���� ã�� ���
            break;
        i++;
    }

    return i == n ? -1 : i;    // �˻� ���� �� -1 ��ȯ
}

int main(void)
{
    int nx, ky;

    puts("���� �˻�(���ʹ�)");
    printf("��� ����: ");
    scanf("%d", &nx);

    int *x = calloc(nx + 1, sizeof(int));   // ����� ������ (nx + 1)�� int�� �迭
    for (int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("�˻��� ��: ");
    scanf("%d", &ky);

    int idx = search(x, nx, ky);    // �迭 x���� ���� ky�� ��Ҹ� ���� �˻�
    if (idx == -1)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);    // �迭 x�� ����
    return 0;
}




// ���� �˻�

#include <stdio.h>
#include <stdlib.h>

// ����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
int bin_search(const int a[], int n, int key)
{
    int pl = 0;        // �˻� ���� �� ���� �ε���
    int pr = n - 1;    // �˻� ���� �� ���� �ε���

    do {
        int pc = (pl + pr) / 2;   // �˻� ������ �߾� �ε���

        if (a[pc] == key)
            return pc;            // �˻� ����
        else if (a[pc] < key)
            pl = pc + 1;          // �˻� ������ ���� �������� ����
        else
            pr = pc - 1;          // �˻� ������ ���� �������� ����

    } while (pl <= pr);

    return -1;                    // �˻� ����
}

int main(void)
{
    int nx, ky;

    puts("���� �˻�");
    printf("��� ����: ");
    scanf("%d", &nx);

    int *x = calloc(nx, sizeof(int));   // ����� ������ nx�� int�� �迭 ����
    printf("������������ �Է��ϼ���.\n");
    for (int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("�˻��� ��: ");
    scanf("%d", &ky);

    int idx = bin_search(x, nx, ky);    // �迭 x���� ���� ky�� ��Ҹ� ���� �˻�
    if (idx == -1)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);    // �迭 x ����
    return 0;
}*/



#include <stdio.h>
#include <stdlib.h>

int bin_search(const int a[], int n, int key)
{
    int pl = 0;        // �˻� ���� �� �� �ε���
    int pr = n - 1;    // �˻� ���� �� �� �ε���

    do {
        int pc = (pl + pr) / 2;   // �߾� ����� �ε���
        if (a[pc] == key)
            return pc;            // �˻� ����
        else if (a[pc] < key)
            pl = pc + 1;          // �˻� ������ ���� ������ ����
        else
            pr = pc - 1;          // �˻� ������ ���� ������ ����
    } while (pl <= pr);

    return -1;   // �˻� ����
}

int main(void)
{
    int nx, ky;
    puts("bsearch �Լ��� ����Ͽ� �˻�");
    printf("��� ����: ");
    scanf("%d", &nx);

    int *x = calloc(nx, sizeof(int));  // nx���� int�� �迭 ���� ����

    printf("������������ �Է��ϼ���.\n");
    printf("x[0]: ");
    scanf("%d", &x[0]);

    for (int i = 1; i < nx; i++) {
        do {
            printf("x[%d]: ", i);
            scanf("%d", &x[i]);
        } while (x[i] < x[i - 1]); // �ٷ� ���� ������ ������ �ٽ� �Է�
    }

    printf("�˻��� ��: ");
    scanf("%d", &ky);

    int idx = bin_search(x, nx, ky);  // ���� Ž�� �Լ� ȣ��

    if (idx == -1)
        puts("�˻��� �����߽��ϴ�.");
    else
        printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);

    free(x);  // ���� �޸� ����
    return 0;
}


