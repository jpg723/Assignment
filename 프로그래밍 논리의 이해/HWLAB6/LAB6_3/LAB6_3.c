/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char grade;
	int score;

	//변수 입력
	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade != 'A') //학점이 A가 아니라면 종료
		return 0;

	else {
		printf("Enter your score: ");
		scanf("%d", &score);

		printf("%d점이면 %c를 받는 군요.\n", score, grade);
	}

	return 0;
}