/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char alp;
	int value;

	//alp입력
	printf("Enter an alphabet: ");
	scanf("%c", &alp);

	//결과 출력
	printf("%c %d\n", alp, alp);

	//value 입력
	printf("Enter a ascii value: ");
	scanf("%d", &value);

	//결과 출력
	printf("%d %c\n", value, value);

	return 0;
}