/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
int main(void)
{
    int arrayA[SIZE] = { 1, 2, 3, 4, 1 };
    int arrayB[SIZE];
    int arrayC[SIZE];
    int i;
    int same;
    
    for (i = 0; i < SIZE; i++)
    {
        arrayB[i] = arrayA[i]; //arrayA의 값을 arrayB에 복사
        arrayC[i] = arrayA[SIZE - i - 1]; //arrayA의 값을 역순으로 arrayC에 복사
    }
    
    //arrayA, arrayB, arrayC를 출력
    printf("ArrayA: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arrayA[i]);
    printf("\n");

    printf("ArrayB: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arrayB[i]);
    printf("\n");

    printf("ArrayC: ");
    for (i = 0; i < SIZE; i++)
        printf("%d ", arrayC[i]);
    printf("\n");

    //arrayA와 arrayB가 같은 가를 판별
    same = 1; // 일단 두 배열이 같다고 값을 설정한 후

    for (i = 0; i < SIZE; i++) {
        if (arrayA[i] != arrayB[i]) {
            same = 0;
            break;
        }
    }

    if (same)
        printf("ArrayA와 arrayB는 같다\n");
    else
        printf("ArrayA와 arrayB는 다르다\n");

    //arrayA와 arrayC가 같은 가를 판별
    same = 1;

    for (i = 0; i < SIZE; i++) {
        if (arrayA[i] != arrayC[i]) {
            same = 0;
            break;
        }
    }

    if (same)
        printf("ArrayA와 arrayC는 같다\n");
    else
        printf("ArrayA와 arrayC는 다르다\n");

    return 0;
}