
typedef struct TNode {
	int value;
	struct TNode* left;
	struct TNode* right;
} TNode;

typedef TNode* BinTree;

BinTree initTree();
TNode* initTNode(int value);
int isEmpty(BinTree t);
int isLeaf(TNode* t);
TNode* getLeftChild(TNode *t);
TNode* getRightChild(TNode *t);
void addToLeftMost(BinTree *t, int value);
void addToRightMost(BinTree *t, int value);
int countNodes(BinTree t);
int countLeaves(BinTree t);
int height(BinTree node); // number of edges on the longest path from the node to a leaf, also height of a tree = height of root node
int depth(BinTree t, TNode *node); // number of edges from the given node to root, there is no depth for a tree
void displayTNode(TNode *t);
void preOrder(BinTree t, void (*function)(TNode *));
void inOrder(BinTree t, void (*function)(TNode *));
void postOrder(BinTree t, void (*function)(TNode *));
void freeTree(BinTree * t);