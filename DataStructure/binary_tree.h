
typedef struct TNode{
	int value;
	struct TNode* left;
	struct TNode* right;
}TNode;

TNode* initTNode(int value);
extern TNode* getLeftChild(TNode t);
extern TNode* getRightChild(TNode t);
void addToLeftMost(TNode *t, int value);
void addToRightMost(TNode *t, int value);
int isLeaf(TNode t);
int isEmpty(TNode t);
void freeTNode(TNode *t);