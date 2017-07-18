#ifndef _STACK_
#define _STACK_

#include "node.h"

typedef struct{
	Node *top;
}Stack;

Stack *initStack();
void push(Stack *s, int value);
Node* pop(Stack *s);
extern Node* getTop(Stack s);
int isEmpty(Stack s);
void freeStack(Stack *s);

#endif