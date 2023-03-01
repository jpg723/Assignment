#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {

	char alpha[27] = "";
	char encode[27] = "";
	int dist;
	int i;
	int str_len;
	char plaintext[81] = "";
	char encoded_text[81] = "";


	for (i = 0; i < 26; i++) {
		alpha[i] = 'A' + i;
	}

	printf("Enter a distance for encoding: ");
	scanf("%d", &dist);

	for (i = 0; i < 26; i++) { 
		encode[i] = alpha[i] + dist; 

		if (encode[i] > 'Z') {
			encode[i] = encode[i] - 26;
		}
	}

	printf("---------------------------------------------------------------\n");
	printf("alphabet: %s\n", alpha);
	printf("encoded: %s\n", encode);
	printf("---------------------------------------------------------------\n\n");

	printf("Enter a sentence to encode: ");
	fgets(plaintext, 80, stdin);
	fgets(plaintext, 80, stdin);

	printf("original sentence: %s", plaintext);

	str_len = strlen(plaintext);

	for (i = 0; i < str_len; i++) {
		if (plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
			int idx = plaintext[i] - 'A';
			encoded_text[i] = encode[idx];
		}

		else {
			encoded_text[i] = plaintext[i];
		}
	}

	printf("encoded sentence: %s", encoded_text);
}