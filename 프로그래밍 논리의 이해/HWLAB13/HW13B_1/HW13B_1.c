/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	//변수 선언
	char word[81];
	char newWord[81];
	int newIndex = 0;

	//문자열 입력
	printf("Enter one word: ");
	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {

		//대문자를 소문자로 바꾸기
		if (word[i] >= 'A' && word[i] <= 'Z') 
			newWord[newIndex] = word[i] + 32;

		//소문자를 대문자로 바꾸기
		else if (word[i] >= 'a' && word[i] <= 'z') 
			newWord[newIndex] = word[i] - 32;

		//그 이외의 문자는 그대로 넣기
		else
			newWord[newIndex] = word[i];
		
		//newWord 인덱스 증가
		newIndex++;
	}

	//맨 마지막에 공백 넣기
	newWord[newIndex] = '\0';

	//결과출력
	printf("word given: %s\n", word);
	printf("new word: %s\n", newWord);

	return 0;
}