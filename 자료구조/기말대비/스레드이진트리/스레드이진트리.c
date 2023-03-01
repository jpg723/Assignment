//스레드이진트리란? NULL링크에 중위 순회시 후속 노드인 중위 후속자를 저장시켜 놓은 트리
//EX)      G
//     C      F         ->   중위순회하면 ACBGDFE/ A의 중위후속자 = C, C의 중위후속자 = B ...
//  A    B  D   E
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef struct TreeNode {
    int data;
    struct TreeNode* left, * right;
    int is_thread; // 단말인지 비단말인지 구별(오른쪽 링크가 스레드면 TRUE)
} TreeNode;
//       7
//    3     6
//  1  2   4  5
//중위 순회하면 1 3 2 7 4 6 5
TreeNode n1 = { '1', NULL, NULL, 1 }; // 단말
TreeNode n2 = { '2', NULL, NULL, 1 }; // 단말
TreeNode n3 = { '3', &n1, &n2, 0 };
TreeNode n4 = { '4', NULL, NULL, 1 }; // 단말
TreeNode n5 = { '5', NULL, NULL, 0 }; // 단말이지만 중위 순회의 마지막 노드이므로 0으로
TreeNode n6 = { '6', &n4, &n5, 0 };
TreeNode n7 = { '7', &n3, &n6, 0 };
TreeNode* exp = &n7;

TreeNode* find_thread_successor(TreeNode* p) //p의 중위 후속 노드를 리턴한다.
{
    TreeNode* q = p->right;

    if (q == NULL)
        return NULL;

    if (p->is_thread == TRUE)//스레드면 오른쪽 포인터 반환
        return q;

    while (q->left != NULL)//오른쪽 자식의 왼쪽 끝으로 이동
        q = q->left;

    return q;
}
void thread_inorder(TreeNode* t)//스레드버전 중위 순회
{
    TreeNode* q;
    q = t;
    // 일단 중위 순회의 첫 노드로 이동
    while (q->left) 
        q = q->left;
    do
    {
        printf("%c ", q->data);
        q = find_thread_successor(q);
    } while (q);
}
main()
{
    // 단말 노드의 오른쪽 링크에 중위 후속 노드를 연결한다
    n1.right = &n3;
    n2.right = &n7;
    n4.right = &n6;
    thread_inorder(exp);
}