#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

ListNode* insert_last(ListNode* head, int value) // �������� ����
{

	ListNode* temp = head;
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = NULL;

	if (head == NULL) // ���� ����Ʈ�̸�
		head = p;
	else {
		while (temp->link != 0)
			temp = temp->link;

		temp->link = p;
	}
	return head;
}

int keyCount(ListNode* head, element key)
{
	// �ڵ� �ۼ�
	int count = 0;

	while (head != NULL)
	{
		if (head->data == key)
			count++;
		head = head->link;
	}
	return count;
}
int main(void) // �������� ����
{
	ListNode* list = NULL;
	int n, key;

	scanf("%d", &n);
	while (n != -1) {
		list = insert_last(list, n);
		scanf("%d", &n);
	}
	scanf("%d", &key);
	printf("%d\n", keyCount(list, key));
}