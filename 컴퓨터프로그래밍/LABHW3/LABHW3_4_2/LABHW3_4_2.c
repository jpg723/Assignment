/*LABHW3_4_2 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSet(int list[], int s)
{
	printf("{ ");

	for (int i = 0; i < s + 1; i++)
	{
		if (i == s)
			printf("%d ", list[i]);

		else
			printf("%d, ", list[i]);
	}

	printf("}\n");
}
int checkSet(int list[], int s, int n)
{
	for (int i = 0; i < s + 1; i++)
	{
		//집합에 입력한 원소가 이미 있다면
		if (list[i] == n)
			return 1; 
	}

	return 0;
}
int main(void)
{
	int num; //원소
	int set[5] = { 0 }; //집합
	int size = 0; //집합 크기

	//집합이 5개가 채워질 때까지 반복
	while (size < 5) 
	{
		//추가할 원소 입력
		printf("집합에 추가할 원소: ");
		scanf("%d", &num);

		//원소가 집합에 이미 있다면
		if (checkSet(set, size, num) == 1) 
		{
			printf("%d는 이미 집합에 있음\n", num);
			continue; //원소 입력으로 돌아감
		}

		//원소가 집합에 없다면
		else
		{
			set[size] = num; //추가
			printSet(set, size); //집합 출력
			size++; //집합 크기 증가
		}

	}

	return 0;
}