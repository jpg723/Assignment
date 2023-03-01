#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 200
#define TRUE 1
#define FALSE 0

typedef struct {
	int key;
} element;
typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
} HeapType;

// �ʱ�ȭ �Լ�
void init(HeapType* h) // �������� ����
{
	h->heap_size = 0;
}

// ���� ����� ������ heap_size�� ���� h�� item�� �����Ѵ�.
// ���� �Լ�
void insert_max_heap(HeapType* h, element item) // �������� ����
{
	int i;
	i = ++(h->heap_size);

	//  Ʈ���� �Ž��� �ö󰡸鼭 �θ� ���� ���ϴ� ����
	while ((i != 1) && (item.key > h->heap[i / 2].key)) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = item;     // ���ο� ��带 ����
}

// ���� �Լ�
element delete_max_heap(HeapType* h) // �������� ����
{
	int parent, child;
	element item, temp;

	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];
	parent = 1;
	child = 2;
	while (child <= h->heap_size) {
		// ���� ����� �ڽĳ���� �� ���� �ڽĳ�带 ã�´�.
		if ((child < h->heap_size) &&
			(h->heap[child].key) < h->heap[child + 1].key)
			child++;
		if (temp.key >= h->heap[child].key) break;
		// �Ѵܰ� �Ʒ��� �̵�
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}

int calcMax(int a, int b) // �������� ����
{
	if (a >= b)
		return a;
	else
		return b;
}
// find
int find(HeapType* h, int root, int key) // �������� ����
{
	if (h->heap_size < root)
		return 0;
	if (h->heap[root].key == key)
		return root;
	else if (h->heap[root].key < key)
		return 0;
	else
		return calcMax(find(h, root * 2, key), find(h, root * 2 + 1, key));
}

void delete_heap_by_key(HeapType* h, int oldkey) // �ڵ� �ۼ�
{
	int parent, child;
	element item, temp;

	item = h->heap[1];
	temp = h->heap[(h->heap_size)--];
	parent = 1;
	child = 2;

	while (child <= h->heap_size) {

		if ((child < h->heap_size) && (h->heap[child].key) < h->heap[child + 1].key)  
			child++;

		if (temp.key >= h->heap[child].key) 
			break;

		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2; 
	}
	h->heap[parent] = temp;
	return item;
}
void print_heap(HeapType* h) // �������� ����
{
	int s, i;

	for (s = 1; s <= h->heap_size; s *= 2) {	// s = 1, 2, 4, 8, ...
		for (i = s; i < s * 2 && i <= h->heap_size; i++) 	// e.g., when s = 4, i = 4, 5, 6, 7
			printf("%d ", h->heap[i]);
		printf("\n");
	}
}

int main(void) // �������� ����
{
	element ele;
	int index;
	int key;
	HeapType heap;	// ���� ����

	init(&heap);		// �ʱ�ȭ
	scanf("%d", &key);
	while (key != -1) {
		ele.key = key;
		insert_max_heap(&heap, ele);
		scanf("%d", &key);
	}
	print_heap(&heap);

	scanf("%d", &key);
	delete_heap_by_key(&heap, key);
	print_heap(&heap);
}