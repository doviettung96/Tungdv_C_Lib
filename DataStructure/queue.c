#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

Queue* initQueue(){
	Queue *q = (Queue *)malloc(sizeof(Queue));
	q->head = NULL;
	q->tail = NULL;
	return q;
}

void enqueue(Queue *q, int value){
	Node *newNode = initNode(value);
	if(isQEmpty(*q)){
		q->head = newNode;
		q->tail = newNode;
	}else{
		q->tail->next = newNode;
		q->tail = newNode;
	}
}

Node* dequeue(Queue *q){
	if(isQEmpty(*q)){
		printf("Queue is empty\n");
		return NULL;
	}else{
		Node *head = q->head;
		int headValue = q->head->value;
		q->head = q->head->next;
		free(head);
		return initNode(headValue);
	}
}

extern Node* getTail(Queue q){
	if(isQEmpty(q)){
		printf("Queue is empty\n");
	}
	return q.tail;
}

extern Node* getHead(Queue q){
	if(isQEmpty(q)){
		printf("Queue is empty\n");
	}
	return q.head;
}

int isQEmpty(Queue q){
	return q.head == NULL;
}

void freeQueue(Queue *q){
	while(!isQEmpty(*q)){
		dequeue(q);
	}
}