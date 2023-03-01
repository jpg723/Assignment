/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {

	int i;

	srand(time(NULL)); //난수 생성 시작점

	for(i = 0; i < 5; i++)
		printf("난수 출력: %d\n", rand() % 100); //0 - 99

	return 0;
}