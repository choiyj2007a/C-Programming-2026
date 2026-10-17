#include <stdio.h>
#pragma warning(disable: 4996)
#include <windows.h>

//2번 문제

int main()
{
    int num;
    int prev = 0;
    int count = 0;
    int total = 0;

    while (1)
    {
        printf("1~9 사이의 숫자를 입력하세요: ");
        scanf("%d", &num);

        total++;

        if (num == prev)
        {
            count++;
        }
        else
        {
            count = 1;
        }

       prev = num;

       if (count == 3)
        {
            break;
        }
    }

    printf("종료된 숫자: %d\n", num);
    printf("전체 입력 횟수: %d회\n", total);

    return 0;}
