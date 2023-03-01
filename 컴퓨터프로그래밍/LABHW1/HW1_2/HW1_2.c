/*HW1_2 컴퓨터학과 3학년 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	int coins[4] = { 500, 100, 50, 10 };
	int change, i = 0;
	int count[4];

	//거스름돈 입력
	printf("Enter the amount of change: ");
	scanf("%d", &change);
	
	//동전 개수 배열 초기화
	for (int i = 0; i < 4; i++)
		count[i] = 0;

	//동전 거스름돈 계산
	while (change != 0) {

		count[i] = change / coins[i];
		change = change % coins[i];
		i++;
	}

	//결과 출력
	for (int i = 0; i < 4; i++)
		printf("%d coin: %d\n", coins[i], count[i]);

	return 0;
}