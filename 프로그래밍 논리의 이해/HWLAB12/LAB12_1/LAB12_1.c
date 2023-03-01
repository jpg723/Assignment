/*컴퓨터학과 20200997 이미지*/
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
        
    //for 문을 사용하여 total 계산
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }
        
    //average 계산
    average = total / 5;
    
    //total과 average 출력
    printf("Total: %d\n", total);
    printf("Average: %d\n", average);

    for (int i = 0; i < 5; i++)
        printf("%d ", scores[i]);
    printf("\n");

    return 0;
}
