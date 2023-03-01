/*컴퓨터학과 20200997 이미지*/
#include<stdio.h>
int main(void) {

	//변수 값 배정
	int midterm = 100;
	int final = 90;
	int number = 7;
	int square = number * number;
	int cube = number * number * number;

	printf("이름\t\t중간\t학기말\t평균\n");
	printf("Suehee Pak\t%d\t%d\t%d\n", midterm, final, (midterm + final) / 2);
	printf("number: %d\tsquare : %d\t cube: %d\n", number, square, cube);

	return 0;
}