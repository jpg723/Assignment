/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int tom_score, mary_score;

	printf("Tom's score? ");
	scanf("%d", &tom_score);
	printf("Mary's score? ");
	scanf("%d", &mary_score);

	printf("--------- Score Histogram ---------\n");
	
	printf("Tom\t: ");
	for (int i = 0; i < tom_score; i++)
		printf("*");
	printf("<%02d>\n", tom_score);

	printf("Mary\t: ");
	for (int i = 0; i < mary_score; i++)
		printf("*");
	printf("<%02d>\n", mary_score);

	return 0;
}