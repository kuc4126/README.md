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
}

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

//2-4
int main(void)
{
    int el_num;
    printf("��� ���� : ");
    scanf("%d", &el_num);
    int*foo = calloc(el_num, sizeof(int));

    if (foo==NULL)
        puts("�޸� Ȯ���� �����߽��ϴ�.");
    else{
        printf("�ʱ�ȭ ���� Ȯ��.\n", el_num);
        for (int i = 0; i < el_num; i++){
            printf("foo[%d] = %d\n", i, foo[i]);
        }
        
        printf("%d���� ������ �Է��ϼ���.\n", el_num);
        for (int i = 0; i < el_num; i++){
            printf("a[%d] : ", i);
            scanf("%d", &foo[i]);
        }
        printf("�� ��Ұ��� �Ʒ��� �����ϴ�.\n");
        for (int i = 0; i < el_num; i++)
            printf("a[%d] = %d\n", i, foo[i]);
        free(foo);
    }
    
    return 0;
}*/

//2-5 ��� ������ n�� �迭 a�� ����� �ִ�
int maxof(const int foo[], int elem_cnt) {
    int max = foo[0];
    for (int i = 1; i < elem_cnt; i++){
        if (foo[i] > max) max = foo[i];
    }
    return max;
}

int main(void)
{
    int number;
    printf("��� ��: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    printf("%d���� Ű�� �Է��ϼ���.\n", number);
    for (int i = 0; i < number; i++) {
        printf("height[%d]: ", i);
        scanf("%d", &height[i]);
    }
    printf("�ִ��� %d�Դϴ�.\n", maxof(height, number));
    free(height);

    return 0;
}
