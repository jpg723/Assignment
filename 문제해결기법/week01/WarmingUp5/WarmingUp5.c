#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	char string[20];
	char c;
	int i = 0, count = 0;

	printf("Enter a String: "); //문자열 입력
	scanf("%s", string);

	printf("Enter a character: "); //문자 입력
	scanf(" %c", &c);


	for (i = 0; string[i] != NULL; i++) { //문자열이 공백일 때까지 반복

		if (string[i] == c) //문자와 같으면 count 증가
			count++;
	}

	printf("'%c' is appeared %d times\n", c, count);
}