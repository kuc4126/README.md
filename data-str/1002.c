//202530208 김은채 1002강의

#include <stdio.h>

/*
// 배열 요소를 역순으로 정리하는 프로그램

#include <stdio.h>
#include <stdlib.h>         // calloc 때문에 쓰는거


int main(void) {
    int nx;

    printf("요소 개수: ");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));
    for(int i = 0; i < nx; i++) {
        printf("x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    ary_reverse(x, nx);
    printf("배열의 요소를 역순으로 정렬했습니다.\n");
    for(int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);
    free(x);

    return 0;
}

//2-8 대화식으로 기수 변환을 수행 >딱히 중요X
int main(void)
{
    puts("10진수를 기수 변환합니다.");

    int retry;

    do{
        unsigned no;
        int cd;
        char cno[512];

        printf("변환하는 음이 아닌 정수: ");
        scanf("%u", &no);

    do
    {
        printf("어떤 진수로 변환할까요?(2-36): ");
        scanf("%u", &cd);
    } while (cd < 2 || cd > 36);

    int dno = card_conv(no, cd, cno);

    printf("%d진수로는", cd);
    for (int i = 0; i < dno; i++)
        printf("%c", cno[i]);
    printf("입니다\n");

    printf("한 번 더 할까요?(1...예/0...아니오): ");
    scanf("%d", &retry);            
        } while (retry == 1);

    return 0;
    }*/

//2-9실습

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
    printf("나눗셈을 실행한 횟수: %lu\n", counter);

    return 0;    
}