#include <stdio.h>
#pragma warning(disable: 4996)
#include <windows.h>

// 1번 문제
int main()
{
    int score;
    int sum = 0;
    int count = 0;

    while (1)
    {
        printf("점수를 입력하세요 (-1 종료): ");
        scanf("%d", &score);

        if (score == -1)
        {
            break;
        }

        if (score < 0 || score > 100)
        {
            printf("잘못된 점수입니다. 다시 입력하세요.\n");
            continue;
        }

        sum += score;
        count++;
    }

    if (count == 0)
    {
        printf("입력된 점수가 없습니다.\n");
    }
    else
    {
        printf("유효한 점수 개수: %d개\n", count);
        printf("평균: %.2f\n", (double)sum / count);
    }

    return 0;
}
