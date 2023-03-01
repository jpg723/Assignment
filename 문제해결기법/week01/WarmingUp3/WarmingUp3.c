#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int total(int n) {

	int sum = 0;

	for (int i = 1; i <= n; i++) {

		sum += i; //1부터 n까지 더하기
	}

	return sum; //더한 결과 반환
}

int main(void) {
	
	int num;

	while(1) {
		
		printf("Input a number(-1 for exit): ");
		scanf("%d", &num);

		if (num == -1) //-1 입력시 종료
			break;
		
		printf("1부터 %d까지의 합은 %d\n", num, total(num));
	}

	return 0;
}