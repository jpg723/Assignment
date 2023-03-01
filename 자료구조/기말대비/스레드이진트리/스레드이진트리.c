//����������Ʈ����? NULL��ũ�� ���� ��ȸ�� �ļ� ����� ���� �ļ��ڸ� ������� ���� Ʈ��
//EX)      G
//     C      F         ->   ������ȸ�ϸ� ACBGDFE/ A�� �����ļ��� = C, C�� �����ļ��� = B ...
//  A    B  D   E
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef struct TreeNode {
    int data;
    struct TreeNode* left, * right;
    int is_thread; // �ܸ����� ��ܸ����� ����(������ ��ũ�� ������� TRUE)
} TreeNode;
//       7
//    3     6
//  1  2   4  5
//���� ��ȸ�ϸ� 1 3 2 7 4 6 5
TreeNode n1 = { '1', NULL, NULL, 1 }; // �ܸ�
TreeNode n2 = { '2', NULL, NULL, 1 }; // �ܸ�
TreeNode n3 = { '3', &n1, &n2, 0 };
TreeNode n4 = { '4', NULL, NULL, 1 }; // �ܸ�
TreeNode n5 = { '5', NULL, NULL, 0 }; // �ܸ������� ���� ��ȸ�� ������ ����̹Ƿ� 0����
TreeNode n6 = { '6', &n4, &n5, 0 };
TreeNode n7 = { '7', &n3, &n6, 0 };
TreeNode* exp = &n7;

TreeNode* find_thread_successor(TreeNode* p) //p�� ���� �ļ� ��带 �����Ѵ�.
{
    TreeNode* q = p->right;

    if (q == NULL)
        return NULL;

    if (p->is_thread == TRUE)//������� ������ ������ ��ȯ
        return q;

    while (q->left != NULL)//������ �ڽ��� ���� ������ �̵�
        q = q->left;

    return q;
}
void thread_inorder(TreeNode* t)//��������� ���� ��ȸ
{
    TreeNode* q;
    q = t;
    // �ϴ� ���� ��ȸ�� ù ���� �̵�
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
    // �ܸ� ����� ������ ��ũ�� ���� �ļ� ��带 �����Ѵ�
    n1.right = &n3;
    n2.right = &n7;
    n4.right = &n6;
    thread_inorder(exp);
}