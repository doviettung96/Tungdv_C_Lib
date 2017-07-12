#include "node.h"

typedef struct{
	Node *root; // the first node of the list 
	Node *last; // the last node of the list
	int length;
}sllist;

sllist* initList();
void append(sllist *list, int value);
void insert(sllist *list, int value, int position);
Node* getNode(sllist list, int position);
int getPosition(sllist list, int value);
void deleteNode(sllist *list, int position);
void traverse(sllist list, void (*function)(Node *));
int getLength(sllist list);
void freeList(sllist *list);