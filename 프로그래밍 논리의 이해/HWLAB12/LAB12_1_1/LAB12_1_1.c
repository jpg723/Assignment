/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    int scores[5] = { 71, 80, 90, 85, 95 };
    int total = 0, average;

    //for ���� ����Ͽ� total ���
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }

    //average ���
    average = total / 5;

    //total�� average ���
    printf("Total: %d\n", total);
    printf("Average: %d\n", average);

    return 0;
}