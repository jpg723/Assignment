/*HW10_1 ��ǻ���а� 3�г� 20200997 �̹���*/
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

    //�̸�, �߰�, �б⸻ ���� �Է�
    for (int i = 0; i < 3; i++) {

        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter midterm and final score: ");
        scanf("%d %d", &s[i].midterm, &s[i].final);
        s[i].average =( s[i].midterm + s[i].final) / 2; //��� ���
        
        //���� ���
        if (s[i].average >= 80)
            s[i].grade = 'A';

        else if (s[i].average >= 50)
            s[i].grade = 'B';

        else
            s[i].grade = 'F';
    }
    printf("\n");
    
    //�̸�, �߰�, �б⸻ ���� ���
    printf("�̸�\t�߰�\t�б⸻\t���\n");
    for (int i = 0; i < 3; i++)
        printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
    printf("\n");

    //���� ���
    printf("�̸�\t����\n");
    for (int i = 0; i < 3; i++) 
        printf("%s\t%c\n", s[i].name, s[i].grade);
    printf("\n");

    //�߰����, �б⸻��� ��� ���
    for (int i = 0; i < 3; i++) {
        mid_sum += s[i].midterm;
        final_sum += s[i].final;
    }

    mid_average = mid_sum / 3;
    final_average = final_sum / 3;

    //�߰����, �б⸻��� ��� ���
    printf("�߰������ ��� = %d\n", mid_average);
    printf("�б⸻����� ��� = %d\n", final_average);

    return 0;
}