/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	char word[81], newWord[81];
	int i;

	printf("Enter one word: ");
	scanf("%s", word);

	int newWord_index = 0;
	for (i = 0; word[i] != '\0'; i++) {

		if (word[i] >= 'A' && word[i] <= 'Z') {//대문자라면
			newWord[newWord_index] = word[i]; //newWord에 담기
			newWord_index++;
		}
	}

	newWord[newWord_index] = '\0'; //마지막엔 공백 넣기

	printf("%s\n", newWord); //결과 출력

	return 0;
}