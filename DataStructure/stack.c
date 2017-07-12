#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

Stack *initStack(){
	Stack *s = (Stack *)malloc(sizeof(Stack));
	s->top = NULL;
	return s;
}

void push(Stack *s, int value){
	Node *newNode = initNode(value);
	if(isEmpty(*s)){
		s->top = newNode;
	}else{
		newNode->next = s->top;
		s->top = newNode;
	}
}

Node* pop(Stack *s){
	Node *top = s->top;
	int returnValue;
	if(isEmpty(*s)){
		printf("Stack empty\n");
		return NULL;
	}else{
		returnValue = s->top->value;
		s->top = top->next;
		free(top);
		return initNode(returnValue);
	}
}

extern Node* getTop(Stack s){
	if(isEmpty(s))
		return NULL;
	else
		return s.top;
}

int isEmpty(Stack s){
	return s.top == NULL;
}

void freeStack(Stack *s){
	while(!isEmpty(*s))
		pop(s);
}