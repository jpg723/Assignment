/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, check = 0;

	//판별할 num입력
	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {

		if (num % i == 0) //1또는 자기자신 외에 나눠지는 숫자가 있다면
			check = 1; //소수가 아님
	}

	if (check == 1)
		printf("소수가 아니다\n");

	else 
		printf("소수이다.\n");
	

	return 0;
}