#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <windows.h>
#include <stdio.h>

void exerc1(void)
{
    double inch, cm;

    printf("inch를 입력하세요: ");
    scanf("%lf", &inch);

    cm = inch * 2.54;

    printf("%.2f inch = %.2f cm\n", inch, cm);
}

void exerc2(void)
{
    double C, F;

    printf("섭씨를 입력하세요: ");
    scanf("%lf", &C);

    F = C * 9.0 / 5.0 + 32.0;

    printf("%.2f C = %.2f F\n", C, F);
}

void exerc3(void)
{
    double radius, area;
    double pi = 3.141592;

    printf("원의 반지름을 입력하세요: ");
    scanf("%lf", &radius);

    area = pi * radius * radius;

    printf("원의 넓이 = %.2f\n", area);
}

int main(void)
{
    exerc1();
    exerc2();
    exerc3();

    return 0;
}
