/*LAB9_0_2a ��ǻ���а� 3�г� 20200997 �̹���*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <conio.h>
#include <ctype.h> //����ó�� �Լ� ����� ����
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