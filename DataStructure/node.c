#include "node.h"
#include <stdio.h>
#include <stdlib.h>

Node* initNode(int value){
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->value = value;
	newNode->next = NULL;
	return newNode;
}

void displayNode(Node *node){
	printf("%d ", node->value);
}
