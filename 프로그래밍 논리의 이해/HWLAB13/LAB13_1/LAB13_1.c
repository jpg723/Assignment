/*��ǻ���а� 20200997 �̹���*/
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
        arrayB[i] = arrayA[i]; //arrayA�� ���� arrayB�� ����
        arrayC[i] = arrayA[SIZE - i - 1]; //arrayA�� ���� �������� arrayC�� ����
    }
    
    //arrayA, arrayB, arrayC�� ���
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

    //arrayA�� arrayB�� ���� ���� �Ǻ�
    same = 1; // �ϴ� �� �迭�� ���ٰ� ���� ������ ��

    for (i = 0; i < SIZE; i++) {
        if (arrayA[i] != arrayB[i]) {
            same = 0;
            break;
        }
    }

    if (same)
        printf("ArrayA�� arrayB�� ����\n");
    else
        printf("ArrayA�� arrayB�� �ٸ���\n");

    //arrayA�� arrayC�� ���� ���� �Ǻ�
    same = 1;

    for (i = 0; i < SIZE; i++) {
        if (arrayA[i] != arrayC[i]) {
            same = 0;
            break;
        }
    }

    if (same)
        printf("ArrayA�� arrayC�� ����\n");
    else
        printf("ArrayA�� arrayC�� �ٸ���\n");

    return 0;
}