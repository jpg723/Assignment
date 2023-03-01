#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    int n;
    int k;
    int a[1000];
    int i = 0, length = 0;

    scanf("%d %d", &n, &k);

    while (n != 0) {
        a[length] = n % k;
        n = n / k;
        length++;
    }

    for (i = length - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}