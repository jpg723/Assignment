/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    int score;
    char grade;

    printf("Enter a score : ");
    scanf("%d", &score);

    /*1단계
    if (score >= 50)
        printf("The grade is A!\n");
    else
        printf("The grade is F!\n");
    */

    if (score >= 80)
        grade = 'A';

    else if (score >= 50)
        grade = 'B';

    else if (score >= 30)
        grade = 'C';

    else
        grade = 'F';

    printf("The grade is %c!\n", grade);

    return 0;
}