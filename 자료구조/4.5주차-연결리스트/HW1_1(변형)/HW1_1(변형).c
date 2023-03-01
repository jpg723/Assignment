#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 5 // 리스트의 최대크기
typedef int element; // 항목의 정의
typedef struct {
    element array[MAX_LIST_SIZE]; // 배열 정의
    int size; // 현재 리스트에 저장된 항목들의 개수
} ArrayListType;
void error(char* message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}
void init(ArrayListType* L)
{
    L->size = 0;
}

int is_empty(ArrayListType* L)
{
    return L->size = 0;
}
int is_full(ArrayListType* L)
{
    return L->size == MAX_LIST_SIZE;
}

void print_list(ArrayListType* L)
{
    int i;
    for (i = 0; i < L->size; i++)
        printf("%d->", L->array[i]);
    printf("리스트끝\n");
}

void insert(ArrayListType* L, int pos, element item)
{
    pos = 0;

    if ((pos >= 0 && pos <= L->size))
    {
        for (int i = (L->size - 1); i >= pos; i--)
        {
            L->array[i + 1] = L->array[i];
        }
        L->array[pos] = item;
        L->size++;
    }
}

void delete_by_key(ArrayListType* L, element key)
{
    element item = 0;
    int j = 0, cnt = 0;

    for (int i = 0; i < L->size; i++)
    {
        if (L->array[i] == key)
        {
            j = i;
            cnt++;
        }

    }

    if (cnt == 0)
        return 0;

    else
    {
        item = L->array[j];

        for (int i = j; i < (L->size - 1); i++)
            L->array[i] = L->array[i + 1];

        L->size--;

    }
    return item;
}
int main(void)
{
    ArrayListType list1;

    int num, key;

    init(&list1);

    do
    {
        scanf("%d", &num);

        if (num == -1)
            break;

        insert(&list1, 0, num);


    } while (num != -1);
    
    scanf("%d", &key);

    print_list(&list1);
    delete_by_key(&list1, key); 
    print_list(&list1);

    


    return 0;
}
