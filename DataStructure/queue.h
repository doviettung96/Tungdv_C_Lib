#include "node.h"

typedef struct{
	Node *head;
	Node *tail;
}Queue;

Queue* initQueue();
void enqueue(Queue *q, int value);
Node* dequeue(Queue *q);
extern Node* getTail(Queue q);
extern Node* getHead(Queue q);
int isEmpty(Queue q);
void freeQueue(Queue *q);