/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
int main(void) {

	//변수 선언 및 값 배정: 정수형 변수를 number를 선언하고 값을 7로 배정하는 문장 작성
	int number;
	number = 7;
	
	//변수를 사용하여 출력
	printf("The square number of %d is %d\n", number, number * number);
	printf("The cube number of %d is %d\n", number, number * number * number);

	return 0;
}