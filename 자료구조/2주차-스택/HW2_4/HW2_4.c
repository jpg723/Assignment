// HW2_4 20200997 이미지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 100
typedef int element;
typedef struct
{
    element word[MAX_STRING];
    int top;

}StackType;

void init(StackType* s) 
{
    s->top = -1;
}

int is_empty(StackType* s)
{
    return (s->top == -1);
}

int is_full(StackType* s) 
{
    return (s->top == (MAX_STRING - 1));
}

void push(StackType* s, element w) 
{

    if (is_full(s))
    {
        printf("FULL");
        return;
    }

    else
        s->word[++(s->top)] = w;
}

element pop(StackType* s) 
{
    int Temp;

    if (is_empty(s))
        exit(1);

    else
        return s->word[(s->top)--];
}

int palindrome(char str[])
{
    StackType s;
    int i;

    init(&s);

    for (i = 0; str[i] != '\0'; i++) 
        push(&s, str[i]);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != pop(&s))
            return 0;
    }
    return 1;
}

int main(void) 
{
    char word[MAX_STRING];

    printf("Enter a word to check palindrome: ");
    scanf("%s", word);

    if (palindrome(word))
        printf("palindrome 입니다.\n");
    else
        printf("palindrome 이 아닙니다.\n");
}