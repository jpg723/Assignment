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
void display_te(ListNode* head) // text editor �� ���� ���� // 2)
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
// ������ �Լ��� ���Ǹ� �״�� ���⿡
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
    return head; // ����� ��� �����͸� ��ȯ�Ѵ�. 
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
    printf("a: �ؽ�Ʈ ���� ���� �߰�\n");
    printf("i: ���� ��ȣ�� ���� �߰�\n");
    printf("d: ���� ��ȣ�� ���� ����\n");
    printf("v: ���� ��ȣ�� �ش� ���� ���\n");
    printf("p: ��ü �ؽ�Ʈ ���\n");
    printf("q: ��\n");
    printf("�޴� ����:");
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
            printf("�ؽ�Ʈ ���� ������ ����: ");
            rewind(stdin);
            fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);
            list = insert_last(list, newElement);
            display_te(list);
            break;
        case 'i':
            printf("������ ���� ��ȣ: ");
            scanf("%d", &lineNb);
            printf("������ ����: ");
            fflush(stdin);
            fgets(newElement.line, MAX_CHAR_PER_LINE, stdin);
            break;
        case 'd':
            printf("������ ���� ��ȣ: ");
            scanf("%d", &lineNb);
            break;
        case 'v':
            printf("����� ���� ��ȣ: ");
            scanf("%d", &lineNb);
            break;
        case 'p':
            display_te(list);
        }
        fflush(stdin);
    }
}