/*HW16_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	//변수 선언
	int gugudan[8][9];
	int num;

	//구구단 2차원 배열 저장
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
			gugudan[i][j] = (i + 2) * (j + 1);
	}

	//구구단 2차원 배열 출력
	printf("--구구단 표는 다음과 같습니다.\n");

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
			printf("%4d", gugudan[i][j]);
		printf("\n");
	}	

	//원하는 구구단 입력
	printf("--원하는 구구단은? ");
	scanf("%d", &num);

	//원하는 구구단 출력
	for (int i = 0; i < 9; i++)
		printf("%4d", gugudan[num - 2][i]);
	printf("\n");

	return 0;
}