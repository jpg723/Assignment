/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char grade;
	int score;

	//학점 입력
	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A')
		printf("Congratulation\n");

	else if (grade == 'B')
		printf("Okay, try harder\n");

	else if (grade == 'C') {
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("Try harder, you need to get %d next time\n", score + 10);
	}

	else if (grade == 'D' || grade == 'F')
		printf("Sorry, you should take this course again\n");

	else
		printf("Wrong grade\n");

	return 0;
}