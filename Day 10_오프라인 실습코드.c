// 10주차 코드 작성 3개

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

#define SIZE 10   // 2번: 학생 수

int main(void)
{
    int scores[SIZE];

    // 1번: 점수 생성 
    srand((unsigned int)time(NULL));
    for (int i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101;
    }

    // 3번: 결과 출력
    int max = scores[0];
    int min = scores[0];
    int sum = 0;

    printf("number of student: %d\n\n", SIZE);

    printf("score of student\n");
    for (int i = 0; i < SIZE; i++) {
        printf("student %2d: %3d\n", i + 1, scores[i]);

        if (scores[i] > max) max = scores[i];
        if (scores[i] < min) min = scores[i];
        sum += scores[i];
    }

    double avg = (double)sum / SIZE;

    printf("\nresult\n");
    printf("max     : %d\n", max);
    printf("minimum : %d\n", min);
    printf("avg     : %.2f\n", avg);

    return 0;
}
