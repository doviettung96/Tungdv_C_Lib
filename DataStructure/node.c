#include "node.h"
#include <stdio.h>

Node *initNode(int value){
	Node *newNode;
	*newNode.value = value;
	*newNode.next = NULL;
	return newNode;
}