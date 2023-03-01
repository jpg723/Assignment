/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, i = 0;

	//num입력
	printf("Enter a number: ");
	scanf("%d", &num);

	/* 1단계
	i = 1;

	while(i <= 5){
		printf("%d\n", i * i * i);
		i++;
	}
	*/
	i = 1;
	while(i <= num) { //num만큼 반복하고

		printf("%d\n", i * i * i); //세제곱 출력
		i++;
	}

	return 0;
}