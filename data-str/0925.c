//202530208 ����ä 0925����


#include <stdio.h>

#define N 5
int main(){
    int foo[N];
    for (int i = 0; i < N; i++){
        printf("foo[%d] : ", i);
        scanf("%d", &foo[i]);
    }
    puts("�� ����� ��");
    for (int i = 0; i < N; i++)
    {
        printf("foo[%d] = %d\n", i, foo[i]);
    }
    
    return 0;
}