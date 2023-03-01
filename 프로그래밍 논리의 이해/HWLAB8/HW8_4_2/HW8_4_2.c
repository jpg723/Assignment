/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int i = 1, j = 2;

	while (i < 10) { //열

		while (j < 9) { //행

			printf("%d * %d = %d\t", i, j, (i * j));
			j += 2;
		}
		printf("\n");
		i++;
		j = 2; //초기화
	}

	return 0;
}