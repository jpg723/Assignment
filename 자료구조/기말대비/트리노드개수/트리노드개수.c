#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define TRUE 1
#define FALSE 0
#define MAX_TREE_SIZE 20
#define INT_MIN -20
#define INT_MAX 20
typedef struct TreeNode {
    int data;
    struct TreeNode* left, * right;
} TreeNode;
//     root             root2               
//     15                 15
//   4     15           4   15
// 15    16  25      15    16 25
//                              28
TreeNode n1 = { 15, NULL, NULL };
TreeNode n2 = { 4, &n1, NULL };
TreeNode n3 = { 16, NULL, NULL };
TreeNode n4 = { 25, NULL, NULL };
TreeNode n5 = { 15, &n3, &n4 };
TreeNode n6 = { 15, &n2, &n5 };
TreeNode* root = &n6;
TreeNode m1 = { 15, NULL, NULL };
TreeNode m2 = { 4, &n1, NULL };
TreeNode m3 = { 16, NULL, NULL };
TreeNode m7 = { 28, NULL, NULL }; // 추가
TreeNode m4 = { 25, NULL, &m7 }; // 변경
TreeNode m5 = { 15, &m3, &m4 };
TreeNode m6 = { 15, &m2, &m5 };
TreeNode* root2 = &m6;
int get_nonleaf_count(TreeNode* t) {//비단말노드 개수

    if (t == NULL)
        return 0;

    else if ((t->right == NULL) && (t->left == NULL))
        return 0;

    else
        return (1 + get_nonleaf_count(t->left) + get_nonleaf_count(t->right));
}

int get_oneleaf_count(TreeNode* node) {//자식이 하나 있는 노드 개수

    if (node == NULL)
        return 0;

    else if (node->left == NULL && node->right == NULL)
        return 0;

    else if (node->left == NULL)
        return (1 + get_oneleaf_count(node->right));

    else if (node->right == NULL)
        return (1 + get_oneleaf_count(node->left));

    else
        return (get_oneleaf_count(node->left) + get_oneleaf_count(node->right));
}

int get_twoleaf_count(TreeNode* node) {//자식이 두 개 있는 노드

    if (node == NULL)
        return 0;

    else if ((node->left == NULL) && (node->right == NULL))
        return 0;

    else if (node->left == NULL)
        return get_twoleaf_count(node->right);

    else if (node->right == NULL)
        return get_twoleaf_count(node->left);

    else
        return(1 + get_twoleaf_count(node->left) + get_twoleaf_count(node->right));
}

int get_leaf_count(TreeNode* node) {//단말 노드 개수
    
    int count = 0;

    if (node != NULL) {
        if (node->left == NULL && node->right == NULL)
            return 1;
        else
            count = get_leaf_count(node->left) + get_leaf_count(node->right);
    }

    return count;
}
int get_max(TreeNode* node) {//최댓값 

    if (node == NULL)
        return INT_MIN;

    else
        return max(max(node->data, get_max(node->left)), get_max(node->right));
}
int get_min(TreeNode* node) {//최솟값

    if (node == NULL)
        return INT_MAX;

    else
        return min(min(node->data, get_min(node->left)), get_min(node->right));
}

void preorder(TreeNode* root) {

    if (root != NULL) {
        preorder(root->left);
        printf("%d ", root->data);
        preorder(root->right);
    }

}
void node_increase(TreeNode* node) {

    if (node == NULL)
        return;

    else {
        node->data++;
        node_increase(node->left);
        node_increase(node->right);
    }
}
int equal(TreeNode* t1, TreeNode* t2) {

    if (t1 == NULL && t2 == NULL)
        return TRUE;

    else if ((t1 == NULL) || (t2 == NULL))
        return FALSE;

    else if (t1->data != t2->data)
        return FALSE;

    else
        return (equal(t1->left, t2->left) && equal(t1->right, t2->right));
}

TreeNode* copy(TreeNode* node) {

    TreeNode* newNode;

    if (node == NULL)
        return NULL;

    else {
        newNode = (TreeNode*)malloc(sizeof(TreeNode));
        newNode->left = copy(node->left);
        newNode->right = copy(node->right);
        newNode->data = node->data;
        return newNode;
    }
}
int main(void)
{
    TreeNode* result[MAX_TREE_SIZE];
    TreeNode* clone;
    int i, num;
    printf(" 가)\n");
    printf("트리 root 중 비단말노드의 개수는 %d.\n", get_nonleaf_count(root));
    printf("트리 root2 중 비단말노드의 개수는 %d.\n", get_nonleaf_count(root2));

    printf("트리 root 중 자식이 하나만 있는 노드의 개수는 %d.\n", get_oneleaf_count(root));
    printf("트리 root2 중 자식이 하나만 있는 노드의 개수는 %d.\n", get_oneleaf_count(root2));

    printf("트리 root 중 자식이 둘이 있는 노드의 개수는 %d.\n", get_twoleaf_count(root));
    printf("트리 root2 중 자식이 둘이 있는 노드의 개수는 %d.\n", get_twoleaf_count(root2));

    printf("트리 root 중 단말노드 개수는 %d.\n", get_leaf_count(root));
    printf("트리 root2 중 단말노드의 개수는 %d.\n", get_leaf_count(root2));

    printf("트리 root 에서 가장 큰 수는 %d.\n", get_max(root));
    printf("트리 root2 에서 가장 큰 수는 %d.\n", get_max(root2));

    printf("트리 root 에서 가장 작은 수는 %d.\n", get_min(root));
    printf("트리 root2 에서 가장 작은 수는 %d.\n", get_min(root2));

    printf("\n 다)\n");
    preorder(root);
    node_increase(root);
    printf("\n");
    preorder(root);
    printf("\n");
    printf("%s\n", equal(root, root) ? "같다" : "다르다");
    printf("%s\n", equal(root2, root2) ? "같다" : "다르다");
    printf("%s\n", equal(root, root2) ? "같다" : "다르다");

    printf("\n 라)\n");
    clone = copy(root);
    preorder(root);
    printf("\n");
    preorder(clone);
    printf("\n");
}