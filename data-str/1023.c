//202530208 김은채
//10월23일 강의

//선형 검색
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
    puts("선형 검색");
    printf("요소 개수: ");
    scanf("%d", &nx);
    int*x=calloc(nx, sizeof(int));
    for (int i = 0; i < nx; i++)
        printf("검색값: ");
        scanf("%d", &ky);
        int idx = search(x, nx, ky);
        if (idx == -1)
            puts("검색에 실패했습니다.");
        else
            printf("%d (은)는 x[%d]에 있습니다.\n", ky, idx);
        free(x);


        return 0;
        
    
}



// 선형 검색(for 문)

#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(for 문)
int search(const int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (a[i] == key)
            return i;   // 검색 성공
    return -1;          // 검색 실패
}

int main(void)
{
    int nx, ky;

    puts("선형 검색");
    printf("요소 개수 : ");
    scanf("%d", &nx);

    int *x = calloc(nx, sizeof(int));   // 요소의 개수가 nx인 int형 배열을 생성
    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    printf("검색할 값 : ");
    scanf("%d", &ky);

    int idx = search(x, nx, ky);        // 배열 x에서 값이 ky인 요소를 선형 검색
    if (idx == -1)
        puts("검색에 실패했습니다.");
    else
        printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);

    free(x);    // 배열 x를 해제
    return 0;
}




#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(for 문)
int search(const int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (a[i] == key)
            return i;   // 검색 성공
    return -1;          // 검색 실패
}

int main(void)
{
    int nx, ky;

    puts("선형 검색(보초법)");
    printf("요소 개수: ");
    scanf("%d", &nx);

    int *x = calloc(nx + 1, sizeof(int));   // 요소의 개수가 (nx + 1)인 int형 배열
    for (int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("검색할 값: ");
    scanf("%d", &ky);

    int idx = search(x, nx, ky);            // 배열 x에서 값이 ky인 요소를 선형 검색
    if (idx == -1)
        puts("검색에 실패했습니다.");
    else
        printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);

    free(x);    // 배열 x를 해제
    return 0;
}*/



// 선형 검색(보초법)

#include <stdio.h>
#include <stdlib.h>

// 요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색(보초법)
int search(int a[], int n, int key)
{
    int i = 0;
    a[n] = key;     // 보초(sentinel) 추가

    while (1) {
        if (a[i] == key)   // 원하는 키값을 찾은 경우
            break;
        i++;
    }

    return i == n ? -1 : i;    // 검색 실패 시 -1 반환
}

int main(void)
{
    int nx, ky;

    puts("선형 검색(보초법)");
    printf("요소 개수: ");
    scanf("%d", &nx);

    int *x = calloc(nx + 1, sizeof(int));   // 요소의 개수가 (nx + 1)인 int형 배열
    for (int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("검색할 값: ");
    scanf("%d", &ky);

    int idx = search(x, nx, ky);    // 배열 x에서 값이 ky인 요소를 선형 검색
    if (idx == -1)
        puts("검색에 실패했습니다.");
    else
        printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);

    free(x);    // 배열 x를 해제
    return 0;
}
