/*LAB10_0_0 20200997 ��ǻ���а� 3�г� �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student { //student ����ü ����

	char name[20];
	int midterm;
	int final;
};
int main(void) {

	struct student aStudent;

	//�̸�, �߰�, �⸻ ���� �Է�
	printf("Enter student name: ");
	scanf("%s", &aStudent.name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &aStudent.midterm, &aStudent.final);

	printf("\n�̸�\t�߰�\t�б⸻\n");
	printf("%s\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final);

	return 0;

}