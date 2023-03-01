/*LAB10_0_0 20200997 컴퓨터학과 3학년 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct student { //student 구조체 선언

	char name[20];
	int midterm;
	int final;
};
int main(void) {

	struct student aStudent;

	//이름, 중간, 기말 점수 입력
	printf("Enter student name: ");
	scanf("%s", &aStudent.name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &aStudent.midterm, &aStudent.final);

	printf("\n이름\t중간\t학기말\n");
	printf("%s\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final);

	return 0;

}