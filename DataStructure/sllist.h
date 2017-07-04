#include "node.h"

typedef struct sllist{
	Node *root; // the first node of the list 
	Node *cur;  // the current node
	Node *last; // the last node of the list
}sllist;

sllist *initList();
void append(sllist *list, Node *newNode);
void insert(sllist *list, Node *newNode, int position);
Node *get(sllist *list, int position);
void deleteNode(sllist *list, int position);
void traverse(slist *list, void (*function)(Node *));
void freeList(sllist *list);