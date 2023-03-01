/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int n);
int main(void) {

	int num, length = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("\n길이는 %d\n", get_cycle_number(num));

	return 0;
}
int get_cycle_number(int n) {

	int length = 1;

	printf("%d ", n);

	while(n != 1) {

		if (n % 2 == 0) //짝수면
			n /= 2; 

		else //홀수면
			n = n * 3 + 1;

		printf("%d ", n);
		length++;
	
	}

	return length;
}