//202530208 ����ä 0925����


#include <stdio.h>
#include <stdlib.h>

//2-1
//#define N 3 //�迭�� ��� ����
/*int main()
{
    
    int foo[3]; //�ٵ� �� �迭�� ��� ���� �̷��� ��� ��
    for (int i = 0; i < 3; i++){    //�迭�� ����
        printf("foo[%d] : ", i);    //�� ��ҿ� ���� �Է�
        scanf("%d", &foo[i]);
    }
    puts("�� ����� ��");
    for (int i = 0; i < 3; i++)
    {   //�� ����� ���� ���
        printf("foo[%d] = %d\n", i, foo[i]);
    }
    return 0;
} 

//2-2 int�� �迭�� �ʱ�ȭ�ϰ� ���
int main(void){
    int foo[5] = {1, 2, 3, 4, 5};
    int foo_size = sizeof(foo) / sizeof(int); //����� ����
    printf("�迭 foo�� ��� ������ %d�Դϴ�.\n", foo_size);

    for (int i = 0; i < foo_size; i++)
    {
        printf("foo[%d] = %d\n", i, foo[i]);
    }
    
    return 0;
}

//2-3
int main(void) {
    int *x = calloc(1, sizeof(int));
    if (x == NULL) 
        puts("�޸� �Ҵ翡 �����߽��ϴ�.");
    else {
        *x = 57;
        printf("*x = %d\n", *x);
        free(x);
    }
     
    return 0;
}*/

//�������� ���� ����
int main(void) {
    int n = 5;
    int *arr;

    //���� 5���� ������ �޸� �Ҵ� (��� 0���� �ʱ�ȭ)
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("�޸� �Ҵ� ����!\n");
        return 1;
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    //���� �޸� ����
    free(arr);

    return 0;
}