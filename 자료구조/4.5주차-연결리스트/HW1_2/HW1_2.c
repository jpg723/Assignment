#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode* link;
} ListNode;

void error(char* message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

ListNode* insert_first(ListNode* head, int value)
{
    ListNode* p = (ListNode*)malloc(sizeof(ListNode)); //(1)
    p->data = value; // (2)
    p->link = head; // ��� �������� ���� ���� //(3)
    head = p; // ��� ������ ���� //(4)
    return head; // ����� ��� ������ ��ȯ
}

ListNode* insert_last(ListNode* head, int value)
{
    ListNode* temp = head;
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));

    p->data = value;
    p->link = NULL;

    if (head == NULL)
        head = p;

    else
    {
        while (temp->link != NULL)
            temp = temp->link;
        temp->link = p;
    }
    return head;
}

ListNode* delete_first(ListNode* head)
{
    ListNode* removed;

    if (head == NULL)
        error("������ �׸��� ����");

    removed = head;
    head = head->link;
    free(removed);

    return head;
}
ListNode* delete_last(ListNode* head)
{
    ListNode* temp = head;
    ListNode* prevTemp = 0;
    ListNode* removed;

    if (head == NULL)
        error("������ �׸��� ����");

    if (head->link == NULL)
    {
        free(temp);
        head = NULL;
    }

    else
    {
        while (temp->link != NULL)
        {
            prevTemp = temp;
            temp = temp->link;
        }
        prevTemp->link = NULL;
        free(temp);
    }
    return head;
}
ListNode* reverse(ListNode* head)
{
    ListNode* p, * q, * r;

    p = head;
    q = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->link;
        q->link = r;
    }
    return q;
}

ListNode* concat(ListNode* head1, ListNode* head2)
{
    ListNode* p;

    if (head1 == NULL)
        return head2;

    else if (head2 == NULL)
        return head1;

    else
    {
        p = head1;

        while (p->link != NULL)
            p = p->link;

        p->link = head2;

        return head1;
    }
}
void print_list(ListNode* head)
{
    ListNode* p;
    for (p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("\n");
}
int main(void)
{
    ListNode* list1 = NULL, * list2 = NULL, * list3 = NULL;
    //list1 = 30->20->10->�� �����. �̶� 10, 20, 30�� ������ ��带 �����Ѵ�.
    list1 = insert_first(list1, 10);
    list1 = insert_first(list1, 20);
    list1 = insert_first(list1, 30);
    // list1�� ���
    printf("list1 = ");
    print_list(list1);

    //list1�� �� �� ��带 �����Ѵ� ��, list1 = 20->30->
    delete_last(list1);
    list1 = reverse(list1);
    printf("list1 = ");
    print_list(list1); // list1�� ���

     //list2 = 11->22->33->44->�� �����. �̶� 11, 22, 33, 44�� ������ ��带 �����Ѵ�.
    list2 = insert_last(list2, 11);
    list2 = insert_last(list2, 22);
    list2 = insert_last(list2, 33);
    list2 = insert_last(list2, 44);

    printf("list2 = ");
    print_list(list2);// list2�� ���

     // list2�� �� �� ��带 �����Ѵ�. ��, list2 = 11->22->33->

    delete_last(list2);
    printf("list2 = ");
    print_list(list2);// list2�� ���

    //list2�� �������� �ٲ� ����Ʈ�� list3�� ����Ű�� �Ѵ�. list3 = 33->22->11->�� �����.
    list3 = reverse(list2);
    printf("list3 = ");
    print_list(list3); //list3�� ����Ѵ�.

     // list1 = 20->30->33->22->11->�� �����. ��, list1�� list3�� ���ļ� list1�� ����Ű�� �Ѵ�.
    list1 = concat(list1, list3);
    print_list(list1); //list1�� ����Ѵ�. 
}