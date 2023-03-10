#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int element;
typedef struct TreeNode {
	element key;
	struct TreeNode* left, * right;
}TreeNode;

TreeNode* new_node(int item) {
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
TreeNode* insert_node(TreeNode* node, int key) { //삽입

	if (node == NULL)
		return new_node(key);

	if (key < node->key)
		node->left = insert_node(node->left, key);

	else if (key > node->key)
		node->right = insert_node(node->right, key);

	return node;
}

TreeNode* min_value_node(TreeNode* node) {

	TreeNode* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}
TreeNode* delete_node(TreeNode* root, int key) { //삭제

	if (root == NULL)
		return root;

	if (key < root->key)
		root->left = delete_node(root->left, key);

	else if (key > root->key)
		root->right = delete_node(root->right, key);

	else { // 삭제할 키가 루트와 같다면
		// 삭제할 노드가 단말노드 또는 자식노드 1개만 가질 때
		if (root->left == NULL) { 
			TreeNode* temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL) {
			TreeNode* temp = root->left;
			free(root);
			return temp;
		}

		// 삭제할 노드가 자식노드 2개를 가질 때
		TreeNode* temp = min_value_node(root->right);
		root->key = temp->key;
		root->right = delete_node(root->right, temp->key);
	}
	return root;
}

TreeNode* search(TreeNode* node, int key) { //탐색

	if (node == NULL)
		return NULL;

	else if (key == node->key)
		return node;

	else if (key < node->key)
		return search(node->left, key); // 왼쪽 서브트리로 이동

	else
		return search(node->right, key); // 오른쪽 서브트리로 이동
}

void preorder(TreeNode* root) {

	if (root != NULL) {

		//printf("%d ", root->key);
		preorder(root->left);
		printf("%d ", root->key);
		preorder(root->right);
	}

}

int get_node_count(TreeNode* node) {// 노드 개수

	int count = 0;

	if (node != NULL)
		count = 1 + get_node_count(node->left) + get_node_count(node->right);

	return count;
}

int get_height(TreeNode* node) {//높이

	int height = 0;

	if (node != NULL) {
		height = 1 + max(get_height(node->left), get_height(node->right));
	}
	return height;
}

int get_maximum(TreeNode* node) {

	while (node->right != NULL)
		node = node->right;
	return node->key;
}
int get_mininum(TreeNode* node) {

	while (node->left != NULL)
		node = node->left;
	return node->key;
}
int main(void)
{
	TreeNode* root = NULL;
	char ans;
	int num = 0;

	do {
		printf("Enter i(nsert), d(elete), s(earch), p(rint), h(eight), c(ount), m(aax), n(min), q(uit): ");
		scanf(" %c", &ans);

		if (ans == 'i') {
			printf("삽입할 key값 입력: ");
			scanf("%d", &num);
			root = insert_node(root, num);
		}

		else if (ans == 'd') {
			printf("삭제할 key값 입력: ");
			scanf_s("%d", &num);
			root = delete_node(root, num);
		}

		else if (ans == 's') {
			printf("탐색할 key값 입력: ");
			scanf_s("%d", &num);

			if (search(root, num) != NULL)
				printf("있음\n");
			else
				printf("없음\n");
		}

		else if (ans == 'p') {
			preorder(root);
			printf("\n");
		}

		else if (ans == 'h') {
			printf("트리의 높이는 %d\n", get_height(root));
		}

		else if (ans == 'c') {
			printf("노드의 개수는 %d\n", get_node_count(root));
		}

		else if (ans == 'm')
			printf("가장 큰 값은 %d\n", get_maximum(root));

		else if (ans == 'n')
			printf("가장 작은 값은 %d\n", get_mininum(root));

	} while (ans != 'q');



}