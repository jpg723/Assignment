/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int height, weight;
	char ch;

	do {
		printf("Enter your height: ");
		scanf("%d", &height);

		weight = height - 110;

		while (getchar() != '\n'); //남아있는 문자들을 비우기 위해 필요

		printf("Your ideal weight is %d.\n", weight);
		printf("Do you want to continue?(y/n): ");
		scanf("%c", &ch);

	} while (ch == 'y');

	return 0;
}