/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {


	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	switch (number)
	{
	case 1:
		printf("Spring\n");
		break;

	case 2:
		printf("Summer\n");
		break;

	case 3:
		printf("Fall\n");
		break;

	case 4:
		printf("Winter\n");
		break;

	default:
		printf("Invalid number\n");
		break;
	}

	return 0;
}