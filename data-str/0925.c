//202530208 김은채 0925강의


#include <stdio.h>
#include <stdlib.h>

//2-1
//#define N 3 //배열의 요소 개수
/*int main()
{
    
    int foo[3]; //근데 걍 배열의 요소 개수 이렇게 적어도 됨
    for (int i = 0; i < 3; i++){    //배열의 선언
        printf("foo[%d] : ", i);    //각 요소에 값을 입력
        scanf("%d", &foo[i]);
    }
    puts("각 요소의 값");
    for (int i = 0; i < 3; i++)
    {   //각 요소의 값을 출력
        printf("foo[%d] = %d\n", i, foo[i]);
    }
    return 0;
} 

//2-2 int형 배열을 초기화하고 출력
int main(void){
    int foo[5] = {1, 2, 3, 4, 5};
    int foo_size = sizeof(foo) / sizeof(int); //요소의 개수
    printf("배열 foo의 요소 개수는 %d입니다.\n", foo_size);

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
        puts("메모리 할당에 실패했습니다.");
    else {
        *x = 57;
        printf("*x = %d\n", *x);
        free(x);
    }
     
    return 0;
}

//교과서에 없는 예제
int main(void) {
    int n = 5;
    int *arr;

    //정수 5개를 저장할 메모리 할당 (모두 0으로 초기화)
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("메모리 할당 실패!\n");
        return 1;
    }
    

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    //동적 메모리 해제
    free(arr);

    return 0;
}

//2-4
int main(void)
{
    int el_num;
    printf("요소 개수 : ");
    scanf("%d", &el_num);
    int*foo = calloc(el_num, sizeof(int));

    if (foo==NULL)
        puts("메모리 확보에 실패했습니다.");
    else{
        printf("초기화 상태 확인.\n", el_num);
        for (int i = 0; i < el_num; i++){
            printf("foo[%d] = %d\n", i, foo[i]);
        }
        
        printf("%d개의 정수를 입력하세요.\n", el_num);
        for (int i = 0; i < el_num; i++){
            printf("a[%d] : ", i);
            scanf("%d", &foo[i]);
        }
        printf("각 요소값은 아래와 같습니다.\n");
        for (int i = 0; i < el_num; i++)
            printf("a[%d] = %d\n", i, foo[i]);
        free(foo);
    }
    
    return 0;
}*/

//2-5 요소 개수가 n인 배열 a의 요소의 최댓값
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
    printf("사람 수: ");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    printf("%d명의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; i++) {
        printf("height[%d]: ", i);
        scanf("%d", &height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, number));
    free(height);

    return 0;
}
