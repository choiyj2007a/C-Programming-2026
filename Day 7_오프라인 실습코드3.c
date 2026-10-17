#include <stdio.h>
#pragma warning(disable: 4996)
#include <windows.h>

//3번 문제

int main()
{
    int n;

    printf("정수 n을 입력하세요: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
