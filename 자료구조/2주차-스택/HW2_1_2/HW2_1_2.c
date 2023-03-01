#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include<string.h>
#define MAX_STACK_SIZE 3
#define MAX_STRING 100

typedef struct
{
    int num;
    char numString[MAX_STRING];
}element;

typedef struct
{
    element stack[MAX_STACK_SIZE];
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
    return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s, element item)
{
    if (is_full(s))
    {
        fprintf(stderr, "���� ��ȭ ����\n");
        return;
    }
    else
    {
        s->stack[++(s->top)] = item;
    }
}
element pop(StackType* s)
{
    if (is_empty(s))
    {
        fprintf(stderr, "���� ���� ����");
        exit(1);
    }
    else return s->stack[(s->top)--];

}

void stack_print(StackType* s)
{
    element e = { 0 };

    if (is_empty(s))
        printf("<empty>\n--\n");

    else
    {
         for (int i = s->top; i >= 0; i--)
         {
             printf("[");
             printf("%d, %s", s->stack[i], e.numString);

             if (i == s->top)                   
                  printf("] <- top\n");
             else
                  printf("]\n");
         }
         printf("--\n");
    }
}
void main()
{
    StackType s;
    element e;

    init(&s);
    stack_print(&s);

    e.num = 10;
    strcpy(e.numString, "ten");
    push(&s, e);
    stack_print(&s);

    e.num = 20;
    strcpy(e.numString, "twenty");
    push(&s, e);
    stack_print(&s);

    e.num = 30;
    strcpy(e.numString, "thirty");
    push(&s, e);
    stack_print(&s);

    e.num = 40;
    strcpy(e.numString, "forty");
    push(&s, e);
    stack_print(&s);

    pop(&s);
    stack_print(&s);

    e.num = 50;
    strcpy(e.numString, "fifty");
    push(&s, e);
    stack_print(&s);

    pop(&s);
    stack_print(&s);

    pop(&s);
    stack_print(&s);

    pop(&s);
    stack_print(&s);
}