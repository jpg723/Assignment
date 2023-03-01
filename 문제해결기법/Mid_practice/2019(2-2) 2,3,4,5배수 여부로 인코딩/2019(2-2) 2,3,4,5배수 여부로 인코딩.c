#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void) {

	char n[52] = { 0 };
	int sum = 0, last_num = 0, last_second_num = 0, num = 0;

	scanf("%s", n);

	for (int i = 0; i < strlen(n); i++) {
		sum += n[i] - 48;
	}

	last_num = (n[strlen(n) - 1] - 48);
	last_second_num = (n[strlen(n) - 2] - 48);
	num = last_second_num * 10 + last_num;
	

	if (last_num % 2 == 0)
		printf("1");
	else
		printf("0");

	if (sum % 3 == 0)
		printf("1");
	else
		printf("0");

	if (num % 4 == 0)
		printf("1");
	else
		printf("0");

	if (last_num % 5 == 0 || last_num % 10 == 0)
		printf("1");
	else
		printf("0");

	return 0;

}