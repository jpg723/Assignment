/*��ǻ���а� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSum1ToN(int a); 
int main() { 
	int n; 
	
	printf("Enter a number : "); 
	scanf("%d", &n); 
	
	printSum1ToN(n); 
}
void printSum1ToN(int a) { 

	int sum = 0;

	for (int i = 1; i <= a; i++)
		sum += i;

	printf("%d ~ %d�� ��: %d\n", 1, a, sum);

	return;
}