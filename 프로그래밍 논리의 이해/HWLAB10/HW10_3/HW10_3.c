/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printManyStars(int starNum);
int main(void)
{
	//���� ����
	int tom_score, mary_score;

	//���� �Է�
	printf("Tom's score? ");
	scanf("%d", &tom_score);
	printf("Mary's score? ");
	scanf("%d", &mary_score);

	//��� ���
	printf("--------- Score Histogram ---------\n");
	printf("Tom\t: ");
	printManyStars(tom_score); 
	printf("Mary\t: ");
	printManyStars(mary_score);

	return 0;
}
void printManyStars(int starNum)
{
	//������ŭ �� ���
	for (int i = 0; i < starNum; i++) 
		printf("*");
	printf("<%02d>\n", starNum);

	return;
}