#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct ListNode { // ��� Ÿ��
    element data;
    struct ListNode* link;
} ListNode;
void print_list(ListNode* head) // Ʋ��(�����ؾ�)
{
    ListNode* p;
    if (head == NULL) return;
    p = head;
    do {
        p = p->link;
        printf("%d->", p->data);
    } while (p != head);
    printf("����Ʈ�� ��"); // ������ ��� ���
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
    return head; // ����� ��� �����͸� ��ȯ�Ѵ�. 
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
    return head; // ����� ��� �����͸� ��ȯ�Ѵ�. 
}
ListNode* delete_first(ListNode* head)
{
    ListNode* temp;

    if (head == NULL) {
        printf("����Ʈ�� ��� ������ ����\n");
        return NULL;
    }
    else if (head == head->link) { // �� �ϳ��� ��尡 ��������
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
        printf("����Ʈ�� ��� ������ ����\n");
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
            printf("ù��° ���� %d\n", p->data);
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
// ���� ���� ����Ʈ �׽�Ʈ ���α׷�
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
    printf("����Ʈ�� ����= %d", get_size(head));
    return 0;
}
    