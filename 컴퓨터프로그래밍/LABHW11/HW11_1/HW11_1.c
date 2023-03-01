/*HW11_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student
{
    char name[20];
    int midterm;
    int final;
    int average;
};
int main(void)
{
    struct student s[3] = { 0 };
    struct student* sp = s;
    int i = 0;
    int m_total = 0;
    int f_total = 0;
    int m_ave;
    int f_ave;

    for (i = 0; i < 3; i++)
    {
        printf("Enter student name: ");
        scanf("%s", sp->name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &sp->midterm, &sp->final);

        sp++;
    }

    sp = s;

    printf("\n이름\t중간\t학기말\t평균\n");

    for (i = 0; i < 3; i++)
    {
        sp->average = (sp->midterm + sp->final) / 2;
        printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
        m_total += sp->midterm;
        f_total += sp->final;
        m_ave = m_total / 3;
        f_ave = f_total / 3;
        sp++;
    }

    sp = s;
    printf("\n이름\t학점\n");
    for (i = 0; i < 3; i++)
    {
        if (sp->average > 80)
        {
            printf("%s\tA\n", sp->name);
        }
        else if (sp->average > 50)
        {
            printf("%s\tB\n", sp->name);
        }
        else
        {
            printf("%s\tF\n", sp->name);
        }
        sp++;
    }

    printf("\n중간고사의 평균 = %d\n", m_ave);
    printf("기말고사의 평균 = %d\n", f_ave);

    return 0;
}