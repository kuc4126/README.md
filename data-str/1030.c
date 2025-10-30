/*202530208 김은채
1030 강의

# 04-1 스택이란

# 스택 알아보기 (1)

# 스택 stack
# 데이터를 일시적으로 저장하기 위해 사용하는 자료구조
# 데이터의 입력과 출력 순서는 후입선출 LIFO Last In First Out
# 즉, 가장 나중에 넣은 데이터를 가장 먼저 꺼냄
# 푸시 push  스택에 데이터를 넣는 작업
# 팝 pop  스택에서 데이터를 꺼내는 작업
# 꼭대기 top  푸시 팝을 하는 위치
#   테이블에 접시처럼 데이터를 넣는 작업도 꺼내는 작업도 위쪽부터 수행
# 바닥 bottom  스택의 가장 밑바닥 부분


# 스택 알아보기 (2)

# 스택의 구현 예

# 함수를 호출하고 실행할 때 프로그램 내부에서는 스택을 사용
# 가장 먼저 main 함수를 실행하며 main 함수는 z 함수를 호출
# 호출된 함수 z는 x 함수와 y 함수를 순서대로 호출
# 함수를 호출할 때는 푸시하고, 함수가 실행을 종료하고 호출한 원래의 함수로 돌아갈 때는 종료된 함수를 팝함

# main -> z -> x -> y 순서대로 함수를 호출
#   이때 스택의 상태는 호출한 함수의 역순으로 겹겹이 쌓여 있어
#   함수 호출이 계층 구조로 이루어져 있음
#   이 상태에서 y 함수의 실행이 종료되면 y 함수만 팝함
*/

// int형 IntStack의 사용
#include <stdio.h>
#include "1030.h"
#include <stdlib.h>

int main(void)
{
	IntStack s;
	if (Initialize(&s, 64) == -1)
	{
		puts("스택 생성에 실패했습니다.");
		return 1;
	}

	while (1)
	{
		int menu, x;
		printf("현재 데이터 수: %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)푸시 (2)팝 (3)피크 (4)출력 (0)종료: ");
		scanf("%d", &menu);

		if (menu == 0)
			break;

		switch (menu)
		{
		 case 1:
			printf("데이터: ");
			scanf("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a오류: 푸시에 실패했습니다.");
			break;

		 case 2:
			if (Pop(&s, &x) == -1)
				puts("\a오류: 팝에 실패했습니다.");
			else
				printf("팝 데이터는 %d입니다.\n", x);
			break;

		 case 3:
			if (Peek(&s, &x) == -1)
				puts("\a오류: 피크에 실패했습니다.");
			else
				printf("피크 데이터는 %d입니다.\n", x);
			break;
            
         case 4:
            Print(&s); 
            break;

         default:
             puts("잘못된 메뉴 선택입니다.");
             break;
		}
	}
    
    Terminate(&s); 
    puts("스택 사용을 종료합니다.");

	return 0;
}

/*

## 큐 알아보기

* **큐(Queue)**
    * 데이터를 일시적으로 쌓아 두기 위한 자료구조
    * 가장 먼저 넣은 데이터를 가장 먼저 꺼내는 **선입선출(FIFO: First-In, First-Out) 구조**를 이름
    * 은행 창구에서 차례를 기다리는 대기열이나 마트에서 계산을 기다리는 대기열과 같음
    * **인큐(en-queue)**: 큐에 데이터를 넣는 작업
    * **디큐(de-queue)**: 데이터를 꺼내는 작업
    * **프런트(front)**: 데이터를 꺼내는 쪽
    * **리어(rear)**: 데이터를 넣는 쪽

*/