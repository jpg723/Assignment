#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int n) {

	int length = 1;

	printf("%d ", n);

	do {

		if (n % 2 == 0)
			n = n / 2;

		else 
			n = n * 3 + 1;

		printf("%d ", n);
		length++;

	} while (n != 1);

	printf("\n");
	return length;

}
int main(void) {

	int num;

	scanf("%d", &num);

	printf("%d", get_cycle_number(num));
}