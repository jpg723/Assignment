/***************
HW13_1 20200997 �̹��� ��ǻ���а� 3�г�
*******************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct Student {
	char name[20];
	int midterm;
	int final;
	int average;
}Student;
// typedef����Ͽ� Student ����
typedef struct cClass {
	int num;
	Student s[40];
}CClass;
// typedef����Ͽ� CClass ����
void printStudent(Student* sp)
{
	printf("%s\t", sp->name);
	printf("%d\t%d\t%d\n", sp->midterm, sp->final, sp->average);
}
void readStudentScore(Student* sp)
{
	printf("Enter student name: ");
	scanf("%s", sp->name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &sp->midterm, &sp->final);
}
void calculateStudentAverage(Student* sp)
{
	sp->average = (sp->midterm + sp->final) / 2;
}
int main(void)
{
	CClass cp;
	int i;
	Student all = { "Total", 0, 0, 0 };
	printf("Enter a number of student: ");
	scanf("%d", &cp.num);
	//a)
	for (i = 0; i < cp.num; i++)
		readStudentScore(&cp.s[i]);

	//b)
	for (i = 0; i < cp.num; i++)
		calculateStudentAverage(&cp.s[i]);

	printf("\n�̸�\t �߰�\t �б⸻\t ���\n");
	for (i = 0; i < cp.num; i++)
		printStudent(&cp.s[i]);
}