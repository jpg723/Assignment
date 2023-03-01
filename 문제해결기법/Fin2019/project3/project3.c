#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int minimun(int a, int b) {

    if (a < b)
        return a;
    else
        return b;
}
int main(void) {

    int n;
    int min;

    scanf("%d", &n);

    int *num = (int*)malloc(sizeof(int) * (n + 1));

    num[0] = 0, num[1] = 0;

    for (int i = 2; i <= n; i++) {

        int min = num[i - 1] + 1;
        if (i % 3 == 0) {
            min = minimun(min, num[i / 3] + 1);
        }
        if (i % 2 == 0) {
            min = minimun(min, num[i / 2] + 1);
        }
        num[i] = min;

    }

    printf("%d\n", num[n]);
}