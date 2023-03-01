/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num, i = 0, total = 0;

	/*1단계
	while (i < 5){

		printf("0보다 큰 수를 입력(%d번째): ", i + 1);
		scanf("%d", &num);

		i++;
		total += num;
	}

	printf("입력된 값의 총 합: %d\n", total);

	*/

	while (i < 5) {
		
		do {
			printf("0보다 큰 수를 입력(%d번째): ", i + 1);
			scanf("%d", &num);
		
		} while (num <= 0);

		i++;
		total += num;
	}

	printf("입력된 값의 총 합: %d\n", total);

	return 0;
}