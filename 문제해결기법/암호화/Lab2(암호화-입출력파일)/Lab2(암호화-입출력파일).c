#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {

	char alpha[27] = "";
	char encoded_alpha[27] = "";
	int dist, i, text_length, idx = 0;
	char text[81] = "";
	char encoded_text[81] = "";

	FILE* fp1, * fp2; //파일 폴더 선언
	fp1 = fopen("original.txt", "rt");
	fp2 = fopen("encoded.txt", "wt");

	for (i = 0; i < 26; i++) {
		alpha[i] = 'A' + i;
	}

	printf("Enter a distance for encoding: ");
	scanf("%d", &dist);
	printf("-----------------------------------------\n");

	for (i = 0; i < 26; i++) {
		encoded_alpha[i] = alpha[i] + dist;

		if (encoded_alpha[i] > 'Z')
			encoded_alpha[i] = encoded_alpha[i] - 26;
	}

	printf("alphabet: %s\n", alpha);
	printf("encoded:  %s\n", encoded_alpha);
	printf("-----------------------------------------\n");

	//printf("%s", text);

	if (fp1 == NULL) {
		printf("파일 오픈 에러1");
		fclose(fp1);
		//exit(1);
	}

	if (fp2 == NULL) {
		printf("파일 오픈 에러2");
		fclose(fp2);
		//exit(1);
	}

	while (fgets(text, sizeof(text), fp1) != NULL) { //fp1을 다 읽을 때까지 한 줄씩 읽기

		text_length = strlen(text);

		for (i = 0; i < text_length + 1; i++) { //암호화 한 다음
			if (text[i] >= 'A' && text[i] <= 'Z') {
				idx = text[i] - 'A';
				encoded_text[i] = encoded_alpha[idx];
			}
			else {
				encoded_text[i] = text[i];
			}
		}

		fputs(encoded_text, fp2); //fp2에 넣기
	}


	fclose(fp1);
	fclose(fp2);

}