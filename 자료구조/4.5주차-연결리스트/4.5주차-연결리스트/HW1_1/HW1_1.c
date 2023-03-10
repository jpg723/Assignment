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
void clear(ArrayListType* L)
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
element get_entry(ArrayListType* L, int pos)
{
    if(pos < 0 || pos >= L->size)
        error("위치 오류");

    return L->array[pos];
}
void print_list(ArrayListType* L)
{
    int i;
    for (i = 0; i < L->size; i++)
        printf("%d->", L->array[i]);
    printf("리스트끝\n");
}
void insert_first(ArrayListType* L, element item)
{
    if (!is_full(L)) 
    {
        for (int i = (L->size - 1); i >= 0; i--) 
        {
            L->array[i + 1] = L->array[i];
        }
        L->array[0] = item;
        L->size++;
    }
    else
        printf("리스트 오버플로우\n");
}
void insert_last(ArrayListType* L, element item)
{
    if (L->size >= MAX_LIST_SIZE) {
        error("리스트 오버플로우\n");
    }

    L->array[L->size] = item;
    L->size++;
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
element delete(ArrayListType* L, int pos)
{
    element item;
        if (pos < 0 || pos >= L->size)
            error("위치 오류");
    item = L->array[pos];

    for (int i = pos; i < (L->size - 1); i++)
        L->array[i] = L->array[i + 1];

    L->size--;
    return item;
}
int get_length(ArrayListType* L)
{
    return L->size;
}
void replace(ArrayListType* L, int pos, element item)
{
    if (pos < 0 || pos >= L->size)
        printf("위치오류");

    L->array[pos] = item;
}
int is_in_list(ArrayListType* L, element item)
{
    for (int i = 0; i < L->size; i++)
    {
        if (L->array[i] == item)
            return 1;        
    }
    return 0;
}
void delete_by_key(ArrayListType* L, element key)
{
    element item;
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
        printf("삭제하려는 key값 %d는 리스트에 없습니다\n", key);
    
    else
    {
        item = L->array[j];

        for (int i = j; i < (L->size - 1); i++)
            L->array[i] = L->array[i + 1];

        L->size--;
        return item;
    }
}
int main(void)
{
    ArrayListType list1;

    init(&list1);
    insert(&list1, 0, 20);
    insert(&list1, 0, 10); print_list(&list1);
    clear(&list1); print_list(&list1);

    insert(&list1, 0, 90); print_list(&list1);

    insert(&list1, 0, 30);
    insert(&list1, 0, 20);
    insert(&list1, 0, 10); print_list(&list1);

    delete(&list1, 2); print_list(&list1);

    printf("\n-이 이후는 HW1_1에서 추가한 함수들 테스트-\n");
    insert_first(&list1, 9); print_list(&list1);
    insert_last(&list1, 99); print_list(&list1);

    insert_first(&list1, 1); print_list(&list1);

    printf("길이는 %d\n", get_length(&list1));
    printf("3번째 데이타는 %d\n", get_entry(&list1, 2));

    replace(&list1, 3, 40); print_list(&list1);
    printf("20은 리스트에 %s\n", is_in_list(&list1, 20) ? "있습니다" : "없습니다");
    printf("22는 리스트에 %s\n", is_in_list(&list1, 22) ? "있습니다" : "없습니다");

    delete_by_key(&list1, 20); print_list(&list1);
    delete_by_key(&list1, 22); print_list(&list1);

    return 0;
}
