/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char word[81];
	int len = 0, i, total = 0, x = 1;

	//문자열 입력
	printf("Enter a word: ");
	scanf("%s", word);

	//문자열 길이
	for (i = 0; word[i] != '\0'; i++);
	len = i;

	//문자열 역순으로 시작
	for (i = len - 1; i >= 0; i--) {

		//숫자일 경우
		if (word[i] >= '0' && word[i] <= '9') { //숫자라면
			
			total += x * (word[i] - 48); //총합 계산
			x *= 10; //10의 자리 증가
		}

		//숫자가 아닐 경우 다시 1의 자리로 초기화
		else {
			x = 1;
		}
	
	}

	printf("글자 안의 수의 합은 %d\n", total);

	return 0;
}