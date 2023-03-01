/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, f = 1;

	//num 입력
	printf("Enter a number (>=2): ");
	scanf("%d", &num);

	//factorial 계산
	printf("%d! = ", num);
	for (int i = num; i > 0; i--) {
		
		f *= i;
		printf("%d", i);

		if (i == 1) //i가 1이면 결과 '=' 출력
			printf(" = ");
		else
			printf(" * ");
	}

	printf("%d\n", f);

	return 0;
}