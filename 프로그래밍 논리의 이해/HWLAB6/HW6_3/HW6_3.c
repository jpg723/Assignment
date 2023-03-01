/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char gender;
	int height, weight;

	printf("Enter your gender(M/F): ");
	scanf("%c", &gender);

	//다이어트 필요성 검사
	if (gender == 'M') //남성인 경우
		printf("Sorry, this fitness center is for women only.\n");

	else { //여성인 경우
		printf("Enter your height: ");
		scanf("%d", &height);
		printf("Enter your weight: ");
		scanf("%d", &weight);

		if (height <= weight + 110)
			printf("You NEED a diet. Try HARDER.\n");

		else
			printf("You do NOT need a diet. Keep exercising.\n");
	}

	return 0;
}