/*LAB10_0_1 20200997 컴퓨터학과 3학년 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student {
    char name[20];
    int midterm;
    int final;
};

int main(void) {

    struct student s[3];

    //이름, 중간, 학기말 점수 입력
    for (int i = 0; i < 3; i++) {
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &s[i].midterm, &s[i].final);
    }

    //결과 출력
    printf("\n이름\t중간\t학기말\n");
    for (int i = 0; i < 3; i++) 
        printf("%s\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final);

    return 0;
}