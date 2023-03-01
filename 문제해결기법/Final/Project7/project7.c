#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solution(char* s) {

    int count = 1, len, idx = 0, zip_len;
    char num;
    char zip_str[1001];

    len = strlen(s);

    for (int i = 0; i < len - 2; i += 2) {
        if (s[i] == s[i + 2] && s[i + 1] == s[i + 3])
            count++;
        else {
            if (count != 1) {
                num = '0' + count;
                zip_str[idx++] = num;
            }
            zip_str[idx++] = s[i];
            zip_str[idx++] = s[i + 1];
            count = 1;
        }
    }
    if (len % 2) {
        zip_str[idx++] = s[len - 1];
    }
    else {
        if (count != 1) {
            num = '0' + count;
            zip_str[idx++] = num;
        }
        zip_str[idx++] = s[len - 2];
        zip_str[idx++] = s[len - 1];
    }
    zip_str[idx] = '\0';
    zip_len = strlen(zip_str);

    printf("%s\n", zip_str);
    printf("%d\n", zip_len);
}

int main() {
    char str[1001];
    scanf("%s", str);
    solution(str);
}