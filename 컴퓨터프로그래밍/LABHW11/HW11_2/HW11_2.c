/***************
HW11_2 20200997 �̹��� ��ǻ���а� 3�г�
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
// typedef����Ͽ� Student ����
typedef struct cClass {
	int num;
	Student s[40];
}CClass;
// typedef����Ͽ� CClass ����
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
	printf("\n�̸�\t �߰�\t �б⸻\t ���\n");
	printClass(&cp);
}