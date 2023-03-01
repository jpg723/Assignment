#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int remove_duplicated_char(char w[], int size, char ch)
{
	int i;
	for (i = 0; i < size; i++)
		if (w[i] == ch)
			return 1;

	return 0;
}
void Eliminate(char* str, char ch)
{
	for (; *str != '\0'; str++)//종료 문자를 만날 때까지 반복
	{
		if (*str == ch)//ch와 같은 문자일 때
		{
			strcpy(str, str + 1);
			str--;
		}
	}
}
int main(void) {

	char alpha[27] = "";
	char encoded[27] = "";;
	int i, j = 0, distance, idx = 0, index = 0, new_index = 0, length, new_length = 0;
	char word[81] = "";
	char new_word[81] = "";
	char text[81] = "";
	char encoded_text[81] = "";

	printf("Enter a key to use for encoding<대문자로 된 단어입력>: ");
	fgets(word, 81, stdin);
	printf("Enter a distance for encoding: ");
	scanf("%d", &distance);
	printf("---------------------------------------\n");

	for (i = 0; i < 26; i++) {
		alpha[i] = 'A' + i;
	}

	printf("%s\n", alpha);

	for (i = 0; i < strlen(word); i++) {
		if (remove_duplicated_char(new_word, j, word[i]) == 0) //중복 문자 제거 후
			new_word[j++] = word[i]; //new_word에 넣기
	}

	for (i = 0; new_word != 0; i++) {
		if (new_word[i] == '\n') {
			new_word[i] = 0;
			break;
		}
	}

	new_length = strlen(new_word);

	for (i = 0; i < new_length; i++) {//alpha에서 new_word 제거
		Eliminate(alpha, new_word[i]);
	}

	for (i = 0; i < 27; i++) {

		if (i < distance) {
			encoded[i] = alpha[26 - distance - new_length + idx];
			idx++;
		}
		else if (i >= distance && i < distance + new_length) {
			encoded[i] = new_word[new_index];
			new_index++;
		}

		else if (i >= new_length && i < 26) {
			encoded[i] = alpha[index];
			index++;
		}
	}

	printf("%s", encoded);
	printf("\n---------------------------------------\n\n");

	printf("Enter a senctence to encode: ");
	fgets(text, 80, stdin);
	fgets(text, 80, stdin);
	printf("original sentence: %s", text);

	length = strlen(text);

	for (i = 0; i < length; i++) {

		if (text[i] >= 'A' && text[i] <= 'Z') {
			int index2 = text[i] - 'A';
			encoded_text[i] = encoded[index2];
		}

		else {
			encoded_text[i] = text[i];
		}
	}

	printf("encoded sentence:  %s", encoded_text);
}