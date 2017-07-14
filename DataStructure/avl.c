#include "avl.h"
#include <stdio.h>
#include <stdlib.h>

TNode* initTNode(int value) {
	TNode *t = (TNode *)malloc(sizeof(TNode));
	t->value = value;
	t->height = 0;
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

int getBalance(TNode *t) {
	if (isEmpty(t))
		return 0;
	return height(t->right) - height(t->left);
}

void rotateLeft(TNode** t) {
	TNode *oldTRight = (*t)->right; // the node to be rotated
	TNode *newTRight = oldTRight->left;

	(*t)->right = newTRight;
	oldTRight->left = (*t);

	updateHeight(t);
	updateHeight(&oldTRight);
	(*t) = oldTRight;
}

void rotateRight(TNode** t) {
	TNode *oldTLeft = (*t)->left; // the node to be rotated
	TNode *newTLeft = oldTLeft->right;

	(*t)->left = newTLeft;
	oldTLeft->right = (*t);

	updateHeight(t);
	updateHeight(&oldTLeft);
	(*t) = oldTLeft;
}

void updateHeight(TNode **t) {
	(*t)->height = max(height((*t)->left), height((*t)->right)) + 1;
}

void insertTNode(TNode** t, int value) {
	if (isEmpty(*t)) {
		*t = initTNode(value);
	} else if ((*t)->value > value) {
		insertTNode(&(*t)->left, value);
	} else if ((*t)->value < value) {
		insertTNode(&(*t)->right, value);
	} else {
		printf("The node is already in the tree\n");
	}

	int balance = getBalance(*t);
	updateHeight(t);

	// right-heavy
	if (balance > 1) {
		if (value > (*t)->right->value) { // right-right
			rotateLeft(t);
		} else if (value < (*t)->right->value) { //right-left
			rotateRight(&(*t)->right);
			rotateLeft(t);
		}
	} else if (balance < -1) {
		if (value < (*t)->left->value) { // left-left
			rotateRight(t);
		} else if (value > (*t)->left->value) { //left-right
			rotateLeft(&(*t)->left);
			rotateRight(t);
		}
	}
}

TNode* search(TNode *t, int key) {
	if (isEmpty(t))
		return NULL;
	if (t->value == key)
		return t;
	else if (t->value > key)
		return search(t->left, key);
	else
		return search(t->right, key);
}

int deleteMin(TNode** t) {
	if (isEmpty(getLeftChild(*t))) {
		int value = (*t)->value;
		*t = (*t)->right;
		return value;
	}
	return deleteMin(&(*t)->left);
}

void deleteTNode(TNode** t, int key) {
	if (isEmpty(*t)) {
		printf("The node is already NULL, no need to delete\n");
	} else if ((*t)->value > key) {
		deleteTNode(&(*t)->left, key);
	} else if ((*t)->value < key) {
		deleteTNode(&(*t)->right, key);
	} else if (isLeaf(*t)) {
		*t = NULL;
	} else if (isEmpty(getLeftChild(*t))) {
		*t = (*t)->right; // has only right node
	} else if (isEmpty(getRightChild(*t))) {
		*t = (*t)->left; // has only left node
	} else {
		// has both left and right then swap it to the smallest node in the right sub-tree
		(*t)->value = deleteMin(&(*t)->right);
	}
}

int max(int a, int b) {
	return a >= b ? a : b;
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
	if (isEmpty(node) || isLeaf(node))
		return 0;
	return node->height;

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
