/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char word[81], newWord[81];
	int index = 0, len = 0, i;

	//문자열 입력
	printf("Enter one word: ");
	scanf("%s", word);

	//문자열 길이 구하기
	for (i = 0; word[i] != '\0'; i++);
	len = i;

	//문자열 역순 배열 만들기
	for (i = len - 1; i >= 0; i--) {

		newWord[index] = word[i];
		index++;
	}

	//공백 삽입
	newWord[index] = '\0';

	//결과 출력
	printf("The reversed word is %s\n", newWord);
}