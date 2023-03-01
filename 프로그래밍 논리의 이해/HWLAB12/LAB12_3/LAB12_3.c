/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    int incomes[7];
    int max = -999;
    
    // 수입을 읽기 위한 for문
    for (int i = 0; i < 7; i++) {
        printf("Enter th income: ");
        scanf("%d", &incomes[i]);
    }

    printf("----------------------------\n");
        
    // 최고 수입 계산 위한 for문
    for (int i = 0; i < 7; i++) {
        if (max < incomes[i])
            max = incomes[i];
    }
     
    // 최고 수입 출력
    printf("The best income is %d\n", max);

    // 수입 출력을 위한 for문
    printf("Incomes are\n");
    for (int i = 0; i < 7; i++)
        printf("%d ", incomes[i]);
    printf("\n");

    return 0;
}