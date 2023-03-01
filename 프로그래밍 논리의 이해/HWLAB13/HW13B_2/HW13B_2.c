/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char word[81];
	int total = 0;

	//문자열 입력
	printf("Enter one word: ");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {

		//문자열이 숫자라면
		if (word[i] >= 48 && word[i] <= 58)
			total += word[i] - 48; //총합계산
	}

	//결과 출력
	printf("안에 있는 숫자들의 합은 %d\n", total);

	return 0;
}