#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {

	char alpha[27] = "";
	char encoded[27] = "";
	char decoded[27] = "";
	int i, distance, length, idx;
	char text[81] = "";
	char encoded_text[81] = "";
	char decoded_text[81] = "";

	printf("Enter a distance for encoding: ");
	scanf("%d", &distance);

	for (i = 0; i < 26; i++) {
		alpha[i] = 'A' + i;
	}

	printf("--------------------------------------\n");
	printf("alphabet: %s\n", alpha);

	for (i = 0; i < 26; i++) {
		encoded[i] = alpha[i] + distance;

		if (encoded[i] > 'Z')  {
			encoded[i] = encoded[i] - 26;
		}
	}

	printf("encoded:  %s\n", encoded);
	printf("--------------------------------------\n");

	printf("Enter a sentence to encode: ");
	fgets(text, 81, stdin);
	fgets(text, 81, stdin);

	printf("original sentence: %s", text);

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

	printf("encoded sentence: %s", encoded_text);


	for (i = 0; i < length; i++) {

		if (encoded_text[i] >= 'A' && encoded_text[i] <= 'Z') {
			idx = encoded_text[i] - 'A' - distance;

			if (idx < 0)
				idx = idx + 26;
			decoded_text[i] = alpha[idx];
		}

		else {
			decoded_text[i] = encoded_text[i];
		}
	}

	printf("decoded sentence: %s", decoded_text);
}