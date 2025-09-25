//202530208 김은채 0925강의


#include <stdio.h>

#define N 5
int main(){
    int foo[N];
    for (int i = 0; i < N; i++){
        printf("foo[%d] : ", i);
        scanf("%d", &foo[i]);
    }
    puts("각 요소의 값");
    for (int i = 0; i < N; i++)
    {
        printf("foo[%d] = %d\n", i, foo[i]);
    }
    
    return 0;
}