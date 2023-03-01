#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int solution(char* s)
{
	int i, j = 0;
	int len;
	char temp[1000] = "";
	char ch;

	ch = s[0];
	len = 1;

	for (i = 1; i < strlen(s); i++)
	{

		if (ch != s[i])
		{
			len++;
		}
		else
		{
			if (len > 1)
				temp[j++] = len + '0';

			temp[j++] = ch;

			ch = s[i];
			len = 1;
		}

	}

	if (len > 1)
		temp[j++] = len + '0';

	temp[j++] = ch;

	temp[j] = '\0';
	printf("%s\n", temp);

	return strlen(temp);
}

int main(void)
{
	char s[1001];

	scanf("%s", s);

	printf("%d\n", solution(s));
}