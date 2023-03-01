#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char s[51];
	int length = 0;
	int sum = 0, last_num = 0, n = 0;
	int num[51];

	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		length++;
		num[i] = s[i] - 48;
		sum += num[i];
	}

	last_num = atoi(&s[length - 1]); //³¡ÀÚ¸®

	if (length == 1)
		n = last_num;

	else
		n = atoi(&s[length - 2]);

	if (last_num % 2 == 0)
		printf("1");
	else
		printf("0");

	if (sum % 3 == 0)
		printf("1");
	else
		printf("0");

	if (n % 4 == 0)
		printf("1");
	else
		printf("0");

	if (last_num == 0 || last_num == 5)
		printf("1");
	else
		printf("0");
}