#define _CRT_SECURE_NO_WARNINGS
#define MAX_CHAR_PER_LINE 100
#include<stdio.h>
typedef struct {
    char line[MAX_CHAR_PER_LINE];
} element;
typedef struct ListNode {
    element data;
    struct ListNode* link;
} ListNode;
void display_te(ListNode* head) // text editor 를 위해 변경 // 2)
{
    ListNode* p;
    int i = 1;

    if (head == NULL) 
        return;
    p = head;

    printf("\n----------text edited---------\n");

    do {
        printf("(%d) %s", p, p->link);
        p = p->link;
        i++;
    } while (p != head);

    printf("\n");
}
// 나머지 함수들 정의를 그대로 여기에
ListNode* insert_last(ListNode* head, element data)
{
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node->data = data;
    if (head == NULL) {
        head = node;
        node->link = head;
    }
    else {
        node->link = head->link; // (1)
        head->link = node; // (2)
        head = node; // (3)
    }
    return head; // 변경된 헤드 포인터를 반환한다. 
}
ListNode* insert_next(ListNode* head, ListNode* pre, element value)
{
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));

    p->data = value;
    p->link = pre->link;
    pre->link = p;
}
char askChoice(void) {
    char choice;
    printf("------------------------------\n");
    printf("a: 텍스트 끝에 라인 추가\n");
    printf("i: 라인 번호로 라인 추가\n");
    printf("d: 라인 번호로 라인 삭제\n");
    printf("v: 라인 번호로 해당 라인 출력\n");
    printf("p: 전체 텍스트 출력\n");
    printf("q: 끝\n");
    printf("메뉴 선택:");
    scanf("%c", &choice);

    return choice;
}
int main(void) // 3)
{
    ListNode* list = NULL;
    char choice;
    int lineNb;
    element newElement;;
    while ((choice = askChoice()) != 'q') {
        switch (choice) {
        case 'a':
            printf("텍스트 끝에 삽입할 라인: ");
            rewind(stdin);
            fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);
            list = insert_last(list, newElement);
            display_te(list);
            break;
        case 'i':
            printf("삽입할 라인 번호: ");
            scanf("%d", &lineNb);
            printf("삽입할 라인: ");
            fflush(stdin);
            fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);
            break;
        case 'd':
            printf("삭제할 라인 번호: ");
            scanf("%d", &lineNb);
            break;
        case 'v':
            printf("출력할 라인 번호: ");
            scanf("%d", &lineNb);
            break;
        case 'p':
            display_te(list);
        }
        fflush(stdin);
    }
}