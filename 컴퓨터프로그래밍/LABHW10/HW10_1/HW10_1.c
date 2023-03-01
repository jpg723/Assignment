/*HW10_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student {
    char name[20];
    int midterm;
    int final;
    int average;
    char grade;
};

int main(void) {

    struct student s[3];
    int mid_average, final_average;
    int mid_sum = 0, final_sum = 0;

    //이름, 중간, 학기말 점수 입력
    for (int i = 0; i < 3; i++) {

        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &s[i].midterm, &s[i].final);
        s[i].average =( s[i].midterm + s[i].final) / 2; //평균 계산
        
        //학점 계산
        if (s[i].average >= 80)
            s[i].grade = 'A';

        else if (s[i].average >= 50)
            s[i].grade = 'B';

        else
            s[i].grade = 'F';
    }
    printf("\n");
    
    //이름, 중간, 학기말 점수 출력
    printf("이름\t중간\t학기말\t평균\n");
    for (int i = 0; i < 3; i++)
        printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
    printf("\n");

    //학점 출력
    printf("이름\t학점\n");
    for (int i = 0; i < 3; i++) 
        printf("%s\t%c\n", s[i].name, s[i].grade);
    printf("\n");

    //중간고사, 학기말고사 평균 계산
    for (int i = 0; i < 3; i++) {
        mid_sum += s[i].midterm;
        final_sum += s[i].final;
    }

    mid_average = mid_sum / 3;
    final_average = final_sum / 3;

    //중간고사, 학기말고사 평균 출력
    printf("중간고사의 평균 = %d\n", mid_average);
    printf("학기말고사의 평균 = %d\n", final_average);

    return 0;
}