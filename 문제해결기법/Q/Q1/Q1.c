#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int carry_count(int n1, int n2) {

	int carry = 0;
	int carry_count = 0;
	int remain1, remain2;

	while (n1 != 0 || n2 != 0) {
		remain1 = n1 % 10;
		remain2 = n2 % 10;

		if (remain1 + remain2 + carry >= 10) {
			carry = 1;
			carry_count++;
		}

		else
			carry = 0;

		n1 = n1 / 10;
		n2 = n2 / 10;
	}

	return carry_count;

}
int main(void) {

	int num1, num2, result;

	scanf("%d %d", &num1, &num2);
	result = carry_count(num1, num2);

	printf("%d\n", result);

	return 0;
}