
typedef struct TNode {
	int value;
	struct TNode* left;
	struct TNode* right;
} TNode;

TNode* initTNode(int value);
extern TNode* getLeftChild(TNode t);
extern TNode* getRightChild(TNode t);
void addToLeftMost(TNode *t, int value);
void addToRightMost(TNode *t, int value);
int isLeaf(TNode t);
int isEmpty(TNode t);
int countNodes(TNode t);
int countLeaves(TNode t);
void displayNode(TNode t);
int height(TNode t); // number of edges on the longest path from the node to a leaf, also height of a tree = height of root node
int depth(TNode t, TNode node); // number of edges from the given node to root, there is no depth for a tree
void preOrder(TNode t, void (*function)(TNode));
void inOrder(TNode t, void (*function)(TNode));
void postOrder(TNode t, void (*function)(TNode));
void freeTNode(TNode *t);