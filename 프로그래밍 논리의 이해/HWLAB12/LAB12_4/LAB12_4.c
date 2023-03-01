/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int data[20] = { 0 };
	int num;

	printf("Enter a number: ");
	scanf("%d", &num); //한줄에 나오는 개수
	
	for (int i = 0; i < 20; i++)
		data[i] = num * (i + 1);

	for (int i = 0; i < 20; i++) {

		if (i % 5 == 0)
			printf("\n");

		printf("%d\t", data[i]);
	}

	printf("\n");

	return 0;
}