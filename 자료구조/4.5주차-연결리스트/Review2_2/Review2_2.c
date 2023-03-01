#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
    int number;
    struct ListNode* link;
}ListNode;

void displayList1(ListNode* head)
{
    ListNode* temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->number);
        temp = temp->link;
    }
}

void displayList2(ListNode* head)
{
    ListNode* temp = head;

    if(temp != NULL)
    {
        printf("%d ", temp->number);
        displayList2(temp->link);
    }
}
int main(void)
{
    ListNode* head, * newNode, * temp;
    
    newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->number = 10;
    newNode->link = NULL;
    head = newNode;

    newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->number = 20;
    newNode->link = NULL;
    head->link = newNode;

    newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->number = 30;
    newNode->link = NULL;
    head->link->link = newNode;

    newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->number = 44;
    newNode->link = NULL;
    
    temp = head;
    
    while (temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newNode;

    newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->number = 1;
    newNode->link = NULL;
    newNode->link = head;
    head = newNode;

    displayList1(head);
    printf("\n");
    displayList2(head);
}