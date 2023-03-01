/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int num, i = 0, total = 0;

	while(i < 5) { //i가 5보다 작을 때까지 반복

		//num입력
		printf("0보다 큰 수를 입력(%d번째): ", i + 1);
		scanf("%d", &num);

		while (num <= 0) { //num이 0보다 작을 경우 다시 입력
			printf("입력이 잘못되었습니다. 0보다 큰 수를 다시 입력(%d번째): ", i + 1);
			scanf("%d", &num);
		}

		i++;
		total += num; //총합 계산
	}

	//결과 출력
	printf("입력된 값의 총 합: %d\n", total);

	return 0;
}