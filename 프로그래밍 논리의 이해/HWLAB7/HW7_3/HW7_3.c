/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, i = 0, factorial = 1;

	//num 입력
	printf("Enter a number: ");
	scanf("%d", &num);

	//factorial 계산
	while (i != num) {

		i++;
		factorial *= i;
	}

	//결과 출력
	printf("%d의 Factorial 값은 %d이다.\n", num, factorial);

	return 0;

}