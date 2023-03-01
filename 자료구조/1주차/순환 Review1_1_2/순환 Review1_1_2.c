#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 
void reverse_string(char* str, int s, int e)
{
	int temp, i;

	for (i = s; i < e + 1 / 2; i++)
	{
		temp = str[i];
		str[i] = str[e];
		str[e] = temp;
		e--;
	}
}

int main(void)
{
	char str[100];

	printf("Enter any string: ");
	scanf("%s", str);

	reverse_string(str, 0, strlen(str) - 1);

	printf("\nReversed String is: %s", str);

	return 0;
}