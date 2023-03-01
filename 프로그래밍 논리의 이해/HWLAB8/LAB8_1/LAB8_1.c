/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int n, i;

	//num입력
	printf("Enter a number: ");
	scanf("%d", &n);

	//세제곱 출력
	for (i = 1; i <= n; i++)
		printf("%d\n", i * i * i);

	return 0;
}