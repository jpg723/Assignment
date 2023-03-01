/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, i = 1, k = 0;

	//num 입력
	printf("Enter a number: "); 
	scanf("%d", &num);

	while (i < num) { //2의 제곱이 num보다 작으면 반복문 돌기
		
		i *= 2; //2의 제곱

		if (i <= num) //2의 제곱이 num 이하면
			k++; //k증가
	}

	//결과 출력
	printf("%d\n", k);

	return 0;
}