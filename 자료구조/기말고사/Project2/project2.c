#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int element;
typedef struct TreeNode {
    element data;
    struct TreeNode* left, * right;
} TreeNode;
// key�� ���� Ž�� Ʈ�� root�� �����Ѵ�. 

TreeNode* insert_node(TreeNode* root, element key) // �������� ����
{
    TreeNode* p, * t; // p�� �θ���, t�� ������ 
    TreeNode* n;        // n�� ���ο� ���

    t = root;
    p = NULL;

    // Ž���� ���� ����, �ݺ��� �̿��ؼ� search(���� search�Լ� ����)
    while (t != NULL) { // �����尡 NULL�� �ɶ�����
         //if( key == t->key ) return root; (A)-1: ���� key�� �ִ� ��� �Լ��� ������ �κ��� �ּ�ó����
        p = t; // �����带 �θ���� �ϰ�
            // �����带 ����
        if (key <= t->data) // (A)-2: ���� �۰ų� ���� ��� �������� �̵�
            t = t->left;
        else
            t = t->right;
    }

    n = (TreeNode*)malloc(sizeof(TreeNode));
    if (n == NULL) exit(1);
    // ������ ����
    n->data = key;
    n->left = n->right = NULL;

    // �θ� ���� ��ũ ����
    if (p != NULL)
        if (key <= p->data)
            p->left = n;
        else
            p->right = n;
    else // ���ʿ� Ʈ���� ����־�����
        root = n;

    return root;
}

void inorder(TreeNode* root) // �������� ����
{
    if (root) {
        inorder(root->left);    // ���ʼ���Ʈ�� ��ȸ
        printf("%d ", root->data);  // ��� �湮
        inorder(root->right);   // �����ʼ���Ʈ�� ��ȸ
    }
}

void preorder(TreeNode* root)  // �������� ����
{
    if (root) {
        printf("%d ", root->data);  // ��� �湮
        preorder(root->left);   // ���ʼ���Ʈ�� ��ȸ
        preorder(root->right);  // �����ʼ���Ʈ�� ��ȸ
    }
}
void printCheck(TreeNode* node) // �������� ����
{
    preorder(node); printf("\n");
    inorder(node); printf("\n");
}

void replaceKeyValue(TreeNode* root, int oldKey, int newKey) // �ڵ� �ۼ�
{
    // ������ �˳��ϰ� ������ �����Ͽ����� �Ϻδ� ä���� �ʾƵ� �ȴ�
    // �� �ٿ� ���� ������ �־ �ȴ�.
    // ��: int temp; if (a > b) return a; else return b;
    
}

int main(void) // �������� ����
{
    int n;
    int oldKey, newKey;
    int key;

    TreeNode* root = NULL;

    scanf("%d", &n);
    while (n != -1) {
        root = insert_node(root, n);
        scanf("%d", &n);
    }
    // printCheck(root); Ʈ��üũ�� ���� �ӽ÷� ����� ��
    scanf("%d", &oldKey);
    scanf("%d", &newKey);
    replaceKeyValue(root, oldKey, newKey);
    printCheck(root);
}