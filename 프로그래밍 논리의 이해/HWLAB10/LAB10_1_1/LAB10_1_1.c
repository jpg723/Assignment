/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
void printManyStars(int num);// 함수의 원형
int main(void) {

	printManyStars(3);
	// 함수의 호출부분 추가
	printManyStars(4);
	printManyStars(5);
}

void printManyStars(int num) { // 함수의 정의, num 만큼 *를 출력한다

	int i;

	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");

	return;
}