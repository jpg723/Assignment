/*LAB9_0_2a 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <conio.h>
#include <ctype.h> //문자처리 함수 사용을 위해
void main()
{
	char c = "";

	printf("Enter characters(^Z for exit):\n");

	while (c != EOF)
	{
		c = fgetc(stdin);

		if (islower(c))
			c = toupper(c);

		else if (isupper(c))
			c = tolower(c);

		fputc(c, stdout);
	}

}