#include <DataStructure/binary_tree.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
	BinTree t = NULL;
	// printf("%p\n", t);
	addToLeftMost(&t, 1);
	addToLeftMost(&t, 2);
	addToRightMost(&t, 4);
	addToRightMost(&t, 3);
	printf("Depth of %d = %d\n",getRightChild(t)->value, depth(t, getRightChild(t)));
	printf("Height of root = %d\n", height(t) - 1);
	preOrder(t, displayTNode);
	printf("\n");
	inOrder(t, displayTNode);
	printf("\n");
	postOrder(t, displayTNode);
	printf("\n");
	printf("Number of nodes %d, leaves %d\n", countNodes(t), countLeaves(t));
	freeTree(t);
}
