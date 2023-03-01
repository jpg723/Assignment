/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int score[20];
	int num;

	printf("Enter the number of scores<<=20>: ");
	scanf("%d", &num);
	//성적 입력
	for (int i = 0; i < num; i++) {
		printf("Enter a score: ");
		scanf("%d", &score[i]);
	} 

	//결과출력
	for (int i = 0; i < num; i++) {

		printf("Student  %d: ", i + 1);

		for (int j = 0; j < score[i]; j++) //점수만큼 별 출력
			printf("*");

		printf("\n");
	}

	return 0;
}