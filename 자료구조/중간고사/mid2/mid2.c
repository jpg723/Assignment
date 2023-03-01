#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void display(ListNode* head) //변경하지 말라
{
	ListNode* p = head;
	while (p != NULL) {
		printf("%d->", p->data);
		p = p->link;
	}
	printf("NULL\n");
}

ListNode* insert_last(ListNode* head, int value) // 변경하지 말라
{

	ListNode* temp = head;
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = NULL;

	if (head == NULL) // 공백 리스트이면
		head = p;
	else {
		while (temp->link != 0)
			temp = temp->link;

		temp->link = p;
	}
	return head;
}

ListNode* insert_sorted(ListNode* head, int value)
{
	// 코드 작성
	head = insert_last(head, value);
	ListNode* p, * temp;
	p = head;

	while (p->link != NULL) {
		if (p->data > p->link->data)
		{
			temp = p->link; 
			p->link = p->link->link; 
			temp->link = value;
			head = p = temp; 
			continue; 
		}
		p = p->link;
	}
	return head;
}

int main(void) // 변경하지 말라
{
	ListNode* list = NULL;
	int n, key;

	scanf("%d", &n);
	while (n != -1) {
		list = insert_last(list, n);
		scanf("%d", &n);
	}
	scanf("%d", &key);
	list = insert_sorted(list, key);
	display(list);
}