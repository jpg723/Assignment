/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    int scores[5];
    int total = 0, average;
    
    scores[0] = 71;
    scores[1] = 80;
    scores[2] = 90;
    scores[3] = 85;
    scores[4] = 95;
        
    //for ���� ����Ͽ� total ���
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }
        
    //average ���
    average = total / 5;
    
    //total�� average ���
    printf("Total: %d\n", total);
    printf("Average: %d\n", average);

    for (int i = 0; i < 5; i++)
        printf("%d ", scores[i]);
    printf("\n");

    return 0;
}
