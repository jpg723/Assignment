/*LABHW3_4_1 ��ǻ���а� 3�г� 20200997 �̹���*/
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
		printf("�������տ� �߰��� ����: ");
		scanf("%d", &num);

		multiset[size] = num;
		printSet(multiset, size);
		size++;
	}

	return 0;
}