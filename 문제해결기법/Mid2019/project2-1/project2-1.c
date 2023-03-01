#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char s[51];
	int length = 0;
	int n;

	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		length++;
	}
	
	n = atoi(&s[length - 1]);

	if (n % 2 == 0)
		printf("1\n");
	else
		printf("0\n");
}