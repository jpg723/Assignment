/***************
HW11_2 20200997 이미지 컴퓨터학과 3학년
*******************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
typedef struct Student {
	char name[20];
	int midterm;
	int final;
	int average;
}Student;
// typedef사용하여 Student 정의
typedef struct cClass {
	int num;
	Student s[40];
}CClass;
// typedef사용하여 CClass 정의
void printClass(CClass* sp)
{
	int i;

	for (i = 0; i < sp->num; i++)
	{
		printf("%s\t", sp->s[i].name);
		printf("%d\t%d\t%d\n", sp->s[i].midterm, sp->s[i].final, sp->s[i].average);
	}
}
void readClass(CClass* sp)
{
	int i = 0;

	for (i = 0; i < sp->num; i++)
	{
		printf("Enter student name: ");
		scanf("%s", sp->s[i].name);
		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->s[i].midterm, &sp->s[i].final);
	}
}
void calculateClassAverage(CClass* sp)
{
	int i;
	for (i = 0; i < sp->num; i++)
	{
		sp->s[i].average = (sp->s[i].midterm + sp->s[i].final) / 2;
	}
}
int main(void)
{
	CClass cp;
	int i;
	Student all = { "Total", 0, 0, 0 };

	printf("Enter a number of student: ");
	scanf("%d", &cp.num);

	readClass(&cp);
	calculateClassAverage(&cp);
	printf("\n이름\t 중간\t 학기말\t 평균\n");
	printClass(&cp);
}