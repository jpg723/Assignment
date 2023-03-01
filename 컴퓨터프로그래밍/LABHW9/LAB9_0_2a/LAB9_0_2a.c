/*LAB9_0_2a 컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <ctype.h> //문자처리 함수 사용을 위해
void main()
{
	char c = "";

	printf("Enter characters(^Z for exit):\n");

	while (c != EOF)
	{
		c = getchar();

		if (islower(c)) 
			c = toupper(c);

		else if (isupper(c))
			c = tolower(c);

		putchar(c);
	}

}

