#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h> 
int main(void)
{
	char n1[101] = { 0 };
	char n2[101] = { 0 };
	char rev_n1[101] = { 0 };
	char rev_n2[101] = { 0 };
	char result[1000] = { 0 };
	char rev_result[1000] = { 0 };
	int i, len_n1, len_n2, carry = 0, carry_count = 0, max_len, sum = 0;

	scanf("%s", n1);
	scanf("%s", n2);

	len_n1 = strlen(n1);
	len_n2 = strlen(n2);

	for (i = 0; i < len_n1; i++) {
		rev_n1[i] = n1[len_n1 - i - 1];
	}

	for (i = 0; i < len_n2; i++) {
		rev_n2[i] = n2[len_n2 - i - 1];
	}

	max_len = strlen(n1);

	for (i = 0; i < max_len; i++) {
		
		sum = (rev_n1[i] - 48) - (rev_n2[i] - 48) - carry;

		if ((rev_n1[i] - 48)== 0) {
			carry_count++;
			continue;
		}
		
		if (sum  < 0) {
			carry = 1;
			carry_count++;
		}
		else
			carry = 0;
	}

	printf("%d\n", carry_count);

	return 0;
}
