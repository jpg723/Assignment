/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printManyStars(int starNum);
int main(void)
{
	//변수 선언
	int tom_score, mary_score;

	//변수 입력
	printf("Tom's score? ");
	scanf("%d", &tom_score);
	printf("Mary's score? ");
	scanf("%d", &mary_score);

	//결과 출력
	printf("--------- Score Histogram ---------\n");
	printf("Tom\t: ");
	printManyStars(tom_score); 
	printf("Mary\t: ");
	printManyStars(mary_score);

	return 0;
}
void printManyStars(int starNum)
{
	//점수만큼 별 출력
	for (int i = 0; i < starNum; i++) 
		printf("*");
	printf("<%02d>\n", starNum);

	return;
}