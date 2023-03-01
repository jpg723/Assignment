#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {

	char encoded[27] = "";
	int i, length, idx;
	char text[1000] = "";
	char encoded_text[81] = "";

	for (i = 0; i < 26; i++) {
		encoded[i] = 'Z' - i;

		if (encoded[i] > 'Z')  {
			encoded[i] = encoded[i] - 26;
		}
	}

	fgets(text, 81, stdin);

	length = strlen(text);

	for (i = 0; i < length; i++) {

		if (text[i] >= 'A' && text[i] <= 'Z') {
			idx = text[i] - 'A';
			encoded_text[i] = encoded[idx];
		}

		else {
			encoded_text[i] = text[i];
		}
	}

	printf("%s", encoded_text);
}