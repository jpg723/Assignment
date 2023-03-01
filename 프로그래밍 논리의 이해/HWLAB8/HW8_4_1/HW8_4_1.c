/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	for (int i = 1; i <= 9; i++) { //열

		for (int j = 2; j <= 8; j += 2) { //행

			printf("%d * %d = %d\t", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}