#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>

TNode* initTNode(int value){
	TNode *t = (TNode *)malloc(sizeof(TNode));
	t->value = value;
	t->left = NULL;
	t->right = NULL;
	return t;
}

extern TNode* getLeftChild(TNode t){
	if(isEmpty(t)){
		printf("The tree is empty\n");
		return NULL;
	}
	else
		return t.left;
}


extern TNode* getRightChild(TNode t){
	if(isEmpty(t)){
		printf("The tree is empty\n");
		return NULL;
	}
	else
		return t.right;
}

int isLeaf(TNode t){
	if(isEmpty(t)){
		printf("The tree is empty\n");
		return 0;
	}else{
		return t.left == NULL && t.right == NULL;
	}

}

void addToLeftMost(TNode *t, int value){
	TNode *newNode = initTNode(value);
	if(isEmpty(*t)){
		t = newNode;
	}else{
		TNode *node = t;
		while(node->left != NULL)
			node = node->left;

		node->left = newNode;
	}
}

void addToRightMost(TNode *t, int value){
	TNode *newNode = initTNode(value);
	if(isEmpty(*t)){
		t = newNode;
	}else{
		TNode *node = t;
		while(node->right != NULL)
			node = node->right;

		node->right = newNode;
	}
}

int isEmpty(TNode t){
	return &t == NULL;
}

void freeTNode(TNode *t){
	if(!isEmpty(*t)){
		freeTNode(t->left);
		freeTNode(t->right);
		free(t);
	}
}
