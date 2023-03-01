/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	char word[81];
	int i;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++) {

		if (word[i] >= 'A' && word[i] <= 'Z')
			printf("%c\n", word[i]);
	}

	return 0;
}