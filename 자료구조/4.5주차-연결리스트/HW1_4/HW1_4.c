#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct ListNode { // 노드 타입
    element data;
    struct ListNode* link;
} ListNode;
void print_list(ListNode* head) // 틀림(수정해야)
{
    ListNode* p;
    if (head == NULL) return;
    p = head;
    do {
        p = p->link;
        printf("%d->", p->data);
    } while (p != head);
    printf("리스트의 끝"); // 마지막 노드 출력
    printf("\n");
}
ListNode* insert_first(ListNode* head, element data)
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
    }
    return head; // 변경된 헤드 포인터를 반환한다. 
}
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
ListNode* delete_first(ListNode* head)
{
    ListNode* temp;

    if (head == NULL) {
        printf("리스트가 비어 삭제를 못함\n");
        return NULL;
    }
    else if (head == head->link) { // 즉 하나의 노드가 남았을때
        free(head);
        head = NULL;
    }
    else {
        temp = head->link;
        head->link = temp->link;
        free(temp);
    }
    return head;
}
ListNode* delete_last(ListNode* head)
{
    ListNode* temp;
    ListNode* p;

    if (head == NULL) {
        printf("리스트가 비어 삭제를 못함\n");
        return NULL;
    }
    else if (head == head->link) 
    {
        free(head);
        head = NULL;
    }
    else {
        temp = head;
        p = head->link;
        head = p->link;
        head->link = p;
        free(temp);
    }
    return head;
}
ListNode* search(ListNode* head, element data)
{
    ListNode* p;

    p = head->link;

    do {
        if (p->data == data)
        {
            printf("첫번째 노드는 %d\n", p->data);
            break;
        }

        p = p ->link;
    } while (p != head->link);

    return NULL;
}
int get_size(ListNode* head)
{
    ListNode* p;
    int count = 0;
    if (head == NULL) return 0;
    p = head->link;
    count++;
    while (p != head) {
        count++;
        p = p->link;
    }
    return count;
}
// 원형 연결 리스트 테스트 프로그램
int main(void)
{
    ListNode* head = NULL;
    // list = 10->20->30->40
    head = insert_last(head, 20);
    print_list(head);
    head = insert_last(head, 30);
    print_list(head);
    head = insert_last(head, 40);
    print_list(head);
    head = insert_first(head, 10);
    print_list(head);
    head = delete_first(head);
    print_list(head);
    head = delete_last(head);
    print_list(head);
    search(head, 20);
    printf("리스트의 길이= %d", get_size(head));
    return 0;
}
    