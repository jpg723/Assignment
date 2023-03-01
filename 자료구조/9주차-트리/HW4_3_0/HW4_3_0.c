#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 100 
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <memory.h>
typedef struct {
	int id;
	char name[MAX_STRING];
	char tel[MAX_STRING];
	char dept[MAX_STRING];
} element;
typedef struct TreeNode {
	element data;
	struct TreeNode* left, * right;
} TreeNode;

int compare(element e1, element e2)
{
	if (e1.id < e2.id)
		return 01;
	else if (e1.id == e2.id)
		return 0;
	else
		return 1;
}
TreeNode* new_node(element item) {
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}
TreeNode* insert_node(TreeNode* node, element key) {

	if (node == NULL)
		return new_node(key);

	if (key.id < node->data.id)
		node->left = insert_node(node->left, key);
	else if (key.id > node->data.id)
		node->right = insert_node(node->right, key);

	return node;
}

TreeNode* get_minimum(TreeNode* node) {

	TreeNode* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}
TreeNode* delete_node(TreeNode* root, int key) {

	if (root == NULL)
		return root;

	if (key < root->data.id) //만약 키가 루트보다 작으면
		root->left = delete_node(root->left, key); // 왼쪽 서브 트리에 있는 것

	else if (key > root->data.id) //만약 키가 루트보다 크면
		root->right = delete_node(root->right, key); //오른쪽 서브 트리에 있는 것

	else { //키가 루트와 같으면 노드 삭제
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

		TreeNode* temp = get_minimum(root->right);
		root->data = temp->data;
		root->right = delete_node(root->right, temp->data.id);
	}
	return root;
}

TreeNode* search(TreeNode* node, int key) {

	if (node == NULL)
		return NULL;

	else if (key == node->data.id)
		return node;

	else if (key < node->data.id)
		return search(node->left, key);

	else
		return search(node->right, key);
	
}

void print(TreeNode* root) { //중순위 탐방

	if (root != NULL) {

		print(root->left);

		printf("-------------------------------------\n");
		printf("학번: %d\n", root->data.id);
		printf("이름: %s\n", root->data.name);
		printf("전화번호: %s\n", root->data.tel);
		printf("학과: %s\n", root->data.dept);

		print(root->right);
	}

}

int get_node_count(TreeNode* node) {

	int count = 0;

	if (node != NULL)
		count = 1 + get_node_count(node->left) + get_node_count(node->right);

	return count;
}

int main(void)
{
	TreeNode* root = NULL;
	element e;
	char ans;
	TreeNode* temp;

	do {
		printf("Enter i(nsert), d(elete), s(earch), p(rint), c(ount), q(uit): ");
		scanf(" %c", &ans);

		if (ans == 'i') {
			printf("학번 입력: ");
			scanf("%d", &e.id);
			getchar();
			printf("이름 입력: ");
			scanf(" %s", e.name);
			getchar();
			printf("전화번호 입력: ");
			scanf(" %s", e.tel);
			getchar();
			printf("학과 입력: ");
			scanf(" %s", e.dept);
			getchar();
			root = insert_node(root, e);
		}

		else if (ans == 'd') {
			printf("삭제할 학번 입력: ");
			scanf_s("%d", &e.id);
			root = delete_node(root, e.id);
		}

		else if (ans == 's') {
			printf("탐색할 학번 입력: ");
			scanf_s("%d", &e.id);

			temp = search(root, e.id);

			if (search(root, e.id) != NULL) {
				printf("--------------------------------------\n");
				printf("학번: %d\n", temp->data.id);
				printf("이름: %s\n", temp->data.name);
				printf("전화번호: %s\n", temp->data.tel);
				printf("학과: %s\n", temp->data.dept);
				printf("--------------------------------------\n");
			}

			else
				printf("id가 %d인 학생은 없습니다.\n", e.id);
		}

		else if (ans == 'c') {
			printf("현재 저장된 학생의 총 수는 %d\n", get_node_count(root));
		}

		else if (ans == 'p') {
			printf("학생 정보 학번 순 출력\n");
			print(root);
			printf("\n");
		}

	} while (ans != 'q');



}