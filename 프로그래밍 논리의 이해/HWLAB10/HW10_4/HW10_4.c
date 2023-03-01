/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printSumMToN(int m, int n);
int main(void) {

	//변수 선언
	int m, n;

	//변수 입력
	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);

	//결과 출력
	printSumMToN(m, n);

	return 0;
}
void printSumMToN(int m, int n) {

	int sum = 0;

	//m부터 n까지 합
	for (int i = m; i <= n; i++)
		sum += i;

	printf("%d ~ %d의 합: %d\n", m, n, sum);

	return;
}