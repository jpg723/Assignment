#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void input(char name[]) {

	printf("Enter your name: ");
	scanf("%s", name); //문자열을 배열의 형태로 저장
}

void reverse(char name[]) {

	int length = 0, i = 0;

	do {
		length++; //문자열 길이
		i++;

	} while (name[i] != NULL);

	for (i = length - 1; i >= 0; i--) { //역순으로 출력
		printf("%c", name[i]);
	}
}

int main(void) {

	char name[50];

	input(name);

	printf("Reverse: ");
	reverse(name);
}