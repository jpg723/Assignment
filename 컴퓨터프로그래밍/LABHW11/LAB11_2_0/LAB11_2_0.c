/*LAB11_2_0 ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct {
    char name[20];
    int midterm;
    int final;
    int average;
}Student;
// typedef �� ����Ͽ� Student �� ����
void printStudent(Student aStudent)
{
    printf("%s\t", aStudent.name);
    printf("%d\t%d\t%d\n", aStudent.midterm, aStudent.final, aStudent.average);
}
int main(void)
{
    Student s[40];
    int num, i;
    printf("Enter a number of student:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Enter student name: "); //a)
        scanf("%s", s[i].name); //b)
        printf("Enter midterm and final score: "); //c)
        scanf("%d %d", &s[i].midterm, &s[i].final); //d)
    }
    for (i = 0; i < num; i++)
        s[i].average = (s[i].midterm + s[i].final) / 2; // e)
        printf("\n �̸�\t �߰�\t �б⸻\t ���\n");
    for (i = 0; i < num; i++)
        printStudent(s[i]);
}
