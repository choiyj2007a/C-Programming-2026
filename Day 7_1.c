//실습 1-1
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)

void exerc1(void) {
    int n, r, x;
    x = 1;

    printf("input n, r: ");
    scanf("%d %d", &n, &r);

    for (int i = 0; i < r; i++) {
        x *= n;
    }

    printf("x = %d, n = %d, r = %d\n", x, n, r);
}

int main() {
    exerc1();
    return 0;
}
