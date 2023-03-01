/*LABHW3_4_1 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSet(int m[], int s) 
{
	printf("{ ");

	for (int i = 0; i < s + 1; i++)
	{
		if (i == s)
			printf("%d ", m[i]);

		else
			printf("%d, ", m[i]);
	}

	printf("}\n");
}

int main(void)
{
	int num;
	int multiset[5] = { 0 };
	int size = 0;

	while (size < 5)
	{
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &num);

		multiset[size] = num;
		printSet(multiset, size);
		size++;
	}

	return 0;
}