#ifndef _TNODE_
#define _TNODE_

typedef struct TNode {
	int value;
	int height;
	struct TNode* left;
	struct TNode* right;
} TNode;

TNode* initTNode(int value);
int isEmpty(TNode* t);
int isLeaf(TNode* t);
TNode* getLeftChild(TNode* t);
TNode* getRightChild(TNode* t);
void insertTNode(TNode** t, int value);
TNode* search(TNode *t, int key);
int deleteMin(TNode** t);
void deleteTNode(TNode** t, int key);
int max(int a, int b);
int getBalance(TNode *t);
void rotateLeft(TNode** t);
void rotateRight(TNode** t);
void updateHeight(TNode **t);
int countNodes(TNode* t);
int countLeaves(TNode* t);
int height(TNode* node); // number of edges on the longest path from the node to a leaf, also height of a tree = height of root node
int depth(TNode* t, TNode* node); // number of edges from the given node to root, there is no depth for a tree
void displayTNode(TNode* t);
void preOrder(TNode* t, void (*function)(TNode *));
void inOrder(TNode* t, void (*function)(TNode *));
void postOrder(TNode* t, void (*function)(TNode *));
void freeTree(TNode* t);

#endif