//250918���ǳ�¥
//�Է¹ް� �������� ��ȣ ����.

#include <stdio.h>

int main(void)
{
    int n;

    printf("����: ");
    scanf("%d", &n);

    printf("%s\n", (n>0) ? "����Դϴ�." : (n<0) ? "�����Դϴ�." : "0�Դϴ�.");

    return 0;
}
