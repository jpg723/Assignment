/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    int scores[5] = { 71, 80, 90, 85, 95 };
    int total = 0, average;

    //for 문을 사용하여 total 계산
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }

    //average 계산
    average = total / 5;

    //total과 average 출력
    printf("Total: %d\n", total);
    printf("Average: %d\n", average);

    return 0;
}