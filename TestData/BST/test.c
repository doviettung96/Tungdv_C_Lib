#include <DataStructure/bst.h>
#include <stdio.h>

void main(){
	TNode *t = NULL;
	insert(&t, 3);
	insert(&t, 2);
	insert(&t, 1);
	insert(&t, 4);
	// printf("Depth of %d = %d\n",getRightChild(t)->value, depth(t, getRightChild(t)));
	// printf("Height of root = %d\n", height(t) - 1);
	// preOrder(t, displayTNode);
	// printf("\n");
	// inOrder(t, displayTNode);
	// printf("\n");
	// postOrder(t, displayTNode);
	// printf("\n");
	// printf("Number of nodes %d, leaves %d\n", countNodes(t), countLeaves(t));
	// freeTree(t);
}
