/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int dan, answer, result = 0, count = 0;

	printf("몇 단을 연습하시겠습니까?: ");
	scanf("%d", &dan);
	
	for (int i = 1; i <= 9; i++) {

		printf("%d * %d = ", dan, i);
		scanf("%d", &answer);

		result = dan * i;

		if (result == answer)
			count++;

		result = 0;
	}

	printf("%d단의 구구단에서 %d를 맞았습니다.\n", dan, count);

	return 0;
}