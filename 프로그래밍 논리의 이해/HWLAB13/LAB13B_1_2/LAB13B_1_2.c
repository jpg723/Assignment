/*��ǻ���а� 20200997 �̹���*/
#include <stdio.h>
int main(void)
{
    int i;
    char ch;
    char str[10] = "abcde"; 

    printf("--���� �� ���ڿ�--\n");
    printf("%s \n", str);
\
    for (i = 0; i < 2; i++) 
    {
        ch = str[4 - i]; 
        str[4 - i] = str[i]; 
        str[i] = ch;
    }

    printf("\n--���� �� ���ڿ�--\n");
    printf("%s \n", str);

    return 0;
}