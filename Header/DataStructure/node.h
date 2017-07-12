typedef struct Node Node;
typedef struct Node{
	int value;
	Node* next;
}Node;

Node *initNode(int value);
void displayNode(Node *node);