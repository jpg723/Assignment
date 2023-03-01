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
	for (; *str != '\0'; str++)
	{
		if (*str == ch)
		{
			strcpy(str, str + 1);
			str--;
		}
	}
}
int main(void) {

	char alpha[27] = "";
	char encoded_alpha[27] = "";
	int dist, i, text_length, idx = 0, new_length, index = 0, new_index = 0, j = 0;
	char text[81] = "";
	char encoded_text[81] = "";
	char word[81] = "";
	char new_word[81] = "";

	FILE* fp1, * fp2; 
	fp1 = fopen("in.txt", "rt");
	fp2 = fopen("out.txt", "wt");

	printf("Enter a key to use for encoding<대문자로 된 단어입력>: ");
	fgets(word, 81, stdin);
	printf("Enter a distance for encoding: ");
	scanf("%d", &dist);
	printf("-----------------------------------------\n");

	for (i = 0; i < 26; i++) {
		alpha[i] = 'A' + i;
	}

	for (i = 0; i < strlen(word); i++) {
		if (remove_duplicated_char(new_word, j, word[i]) == 0) 
			new_word[j++] = word[i]; 
	}

	for (i = 0; new_word != 0; i++) {
		if (new_word[i] == '\n') {
			new_word[i] = 0;
			break;
		}
	}

	new_length = strlen(new_word);
	for (i = 0; i < strlen(new_word); i++) {
		Eliminate(alpha, new_word[i]);
	}

	for (i = 0; i < 27; i++) {

		if (i < dist) {
			encoded_alpha[i] = alpha[26 - dist - new_length + idx];
			idx++;
		}
		else if (i >= dist && i < dist + new_length) {
			encoded_alpha[i] = new_word[new_index];
			new_index++;
		}

		else if (i >= new_length && i < 26) {
			encoded_alpha[i] = alpha[index];
			index++;
		}
	}

	printf("alphabet: %s\n", alpha);
	printf("encoded:  %s\n", encoded_alpha);
	printf("-----------------------------------------\n\n");

	if (fp1 == NULL) {
		printf("파일 오픈 에러1");
		fclose(fp1);
	}

	else {
		printf("입력파일: in.txt\n");
	}

	if (fp2 == NULL) {
		printf("파일 오픈 에러2");
		fclose(fp2);
	}

	else {
		printf("출력파일: out.txt\n");
	}

	while (fgets(text, sizeof(text), fp1) != NULL) { 

		text_length = strlen(text);

		for (i = 0; i < text_length + 1; i++) {
			if (text[i] >= 'A' && text[i] <= 'Z') {
				idx = text[i] - 'A';
				encoded_text[i] = encoded_alpha[idx];
			}
			else {
				encoded_text[i] = text[i];
			}
		}

		fputs(encoded_text, fp2);
	}


	fclose(fp1);
	fclose(fp2);

}