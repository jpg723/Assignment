#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void reverse(char n[]) {

	char temp;

	for (int i = 0; i < strlen(n) / 2; i++) {
		temp = n[i];
		n[i] = n[strlen(n) - 1 - i];
		n[strlen(n) - 1 - i] = temp;
	}

}

int main(void) {

	char n1[101] = { 0 }, n2[101] = { 0 }, rev_n1[101] = { 0 }, rev_n2[101] = { 0 }, res[1001] = { 0 }, result[1001] = { 0 };
	int i = 0, length = 0, sum = 0, carry = 0, carry_count = 0;

	scanf("%s", n1);
	scanf("%s", n2);

	reverse(n1);
	reverse(n2);

	if (strlen(n1) > strlen(n2))
		length = strlen(n1);
	else
		length = strlen(n2);

	for (i = 0; i < length; i++) {

		sum = n1[i] - 48 + n2[i] - 48 + carry;

		while (sum < 0)
			sum += '0';

		if (sum > 9) {
			carry = 1;
			carry_count++;
		}
			
		else
			carry = 0;

		res[i] = sum % 10 + 48;
	}

	if (carry == 1)
		res[length] = '1';

	reverse(res);
	printf("%d", carry_count);
	//printf("%s", res);

	return 0;
}

