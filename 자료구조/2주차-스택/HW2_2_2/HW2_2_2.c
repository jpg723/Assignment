#include <stdio.h>
#include <malloc.h>
// 스택을 위한 타입 정의
typedef char* element_string;
typedef int element;
typedef struct StackNode {
    element item;
    element_string string_item;
    struct StackNode* link;
} StackNode;
typedef struct {
    StackNode* top;
} LinkedStackType;
// 초기화 함수
void init(LinkedStackType* s)
{
    s->top = NULL;
}
// 공백 상태 검출 함수
int is_empty(LinkedStackType* s)
{
    return (s->top == NULL);
}
// 포화 상태 검출 함수
int is_full(LinkedStackType* s) // Stack 연산중의 하나라 남겨두었지만 항상 거짓을 반환. 즉 꽉 차있을 때는 없음
{
    return 0;
}
// 삽입 함수
void push(LinkedStackType* s, element item, element_string string_item)
{
    StackNode* temp = (StackNode*)malloc(sizeof(StackNode));

    if (temp == NULL) {
        fprintf(stderr, "메모리 할당에러\n");
        return;
    }
    else {
        temp->item = item;
        temp->string_item = string_item;
        temp->link = s->top;
        s->top = temp;
    }
}
element pop(LinkedStackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택이 비어있음\n");
        exit(1);
    }
    else {
        StackNode* temp = s->top;
        int item = temp->item;
        s->top = s->top->link;
        free(temp);
        return item;
    }
}
// 피크 함수
element peek(LinkedStackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택이 비어있음\n");
        exit(1);
    }
    else {
        return s->top->item;
    }
}

void stack_print(LinkedStackType* s)
{ //스택 데이터 표시
    StackNode* temp = s->top;

    if (is_empty(s))
        printf("<empty>\n--\n");

    else {

        while (temp != NULL) {

            printf("[");
            printf("%d, %s", temp->item, temp->string_item);

            if (temp == s->top)
                printf("] <- top\n");

            else
                printf("%]\n");

            temp = temp->link;
        }
        printf("--\n");
    }
}
// 주 함수
void main()
{
    LinkedStackType s;
    init(&s);
    stack_print(&s);

    push(&s, 10, "ten");
    stack_print(&s);

    push(&s, 20, "twenty");
    stack_print(&s);

    push(&s, 30, "thirty");
    stack_print(&s);

    push(&s, 40, "forty");
    stack_print(&s);

    pop(&s);
    stack_print(&s);

    pop(&s);
    stack_print(&s);

    push(&s, 50, "forty");
    stack_print(&s);

    pop(&s);
    stack_print(&s);

    pop(&s);
    stack_print(&s);

    pop(&s);
    stack_print(&s);
}