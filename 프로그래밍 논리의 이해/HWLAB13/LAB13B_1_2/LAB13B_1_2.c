/*컴퓨터학과 20200997 이미지*/
#include <stdio.h>
int main(void)
{
    int i;
    char ch;
    char str[10] = "abcde"; 

    printf("--변경 전 문자열--\n");
    printf("%s \n", str);
\
    for (i = 0; i < 2; i++) 
    {
        ch = str[4 - i]; 
        str[4 - i] = str[i]; 
        str[i] = ch;
    }

    printf("\n--변경 후 문자열--\n");
    printf("%s \n", str);

    return 0;
}