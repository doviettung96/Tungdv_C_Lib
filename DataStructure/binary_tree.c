#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>

TNode* initTNode(int value) {
	TNode *t = (TNode *)malloc(sizeof(TNode));
	t->value = value;
	t->left = NULL;
	t->right = NULL;
	return t;
}

int isEmpty(TNode* t) {
	return !t;
}

int isLeaf(TNode* t) {
	if (isEmpty(t)) {
		printf("The tree is empty\n");
		return 0;
	}

	return t->left == NULL && t->right == NULL;
}

TNode* getLeftChild(TNode *t) {
	return t->left;
}


TNode* getRightChild(TNode *t) {
	return t->right;
}

void addToLeftMost(TNode** t, int value) {
	TNode *newNode = initTNode(value);
	if (isEmpty(*t)) {
		*t = newNode;
	} else {
		TNode *node = *t;
		while (node->left != NULL)
			node = node->left;

		node->left = newNode;
	}
}

void addToRightMost(TNode** t, int value) {
	TNode *newNode = initTNode(value);
	if (isEmpty(*t)) {
		*t = newNode;
	} else {
		TNode *node = *t;
		while (node->right != NULL)
			node = node->right;

		node->right = newNode;
	}
}


int countNodes(TNode* t) {
	if (isEmpty(t))
		return 0;

	return 1 + countNodes(t->left) + countNodes(t->right);
}

int countLeaves(TNode* t) {
	if (isEmpty(t))
		return 0;
	if (isLeaf(t))
		return 1;

	return countLeaves(t->left) + countLeaves(t->right);

}

// number of edges on the longest path from the node to a leaf
// also height of a tree = height of root node
int height(TNode* node) {
	if (isEmpty(node)) {
		return 0;
	}
	int heightLeft = height(node->left);
	int heightRight = height(node->right);

	return 1 + (heightLeft > heightRight ? heightLeft : heightRight);
}

// number of edges from the given node to root
// there is no depth for a tree
int depth(TNode* t, TNode *node) {
	int currentDepth = 0;
	if (isEmpty(t) || node == NULL)
		return 0;

	if (node == t->left || node == t->right)
		return currentDepth + 1;

	return 1 + depth(t->left, node) + depth(t->right, node);
}

void displayTNode(TNode *t) {
	printf("%d ", t->value);
}

void preOrder(TNode* t, void (*function)(TNode *)) {
	if (!isEmpty(t)) {
		function(t);
		preOrder(t->left, function);
		preOrder(t->right, function);
	}
}

void inOrder(TNode* t, void (*function)(TNode *)) {
	if (!isEmpty(t)) {
		inOrder(t->left, function);
		function(t);
		inOrder(t->right, function);
	}
}

void postOrder(TNode* t, void (*function)(TNode *)) {
	if (!isEmpty(t)) {
		postOrder(t->left, function);
		postOrder(t->right, function);
		function(t);
	}
}

void freeTree(TNode* t) {
	if (isEmpty(t)) {
		return;
	}
	freeTree(t->left);
	freeTree(t->right);
	free(t);
}
