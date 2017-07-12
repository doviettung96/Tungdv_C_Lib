#include <DataStructure/queue.h>
#include <stdio.h>

void main(){
	Queue *q = initQueue();
	enqueue(q, 1);
	enqueue(q, 2);
	printf("Head = %d, Tail = %d\n", getHead(*q)->value, getTail(*q)->value);
	printf("Dequeue = %d\n", dequeue(q)->value);
	printf("After dequeue\n");
	printf("Head = %d, Tail = %d\n", getHead(*q)->value, getTail(*q)->value);
	printf("Dequeue = %d\n", dequeue(q)->value);
	printf("After dequeue\n");
	printf("Head = %d, Tail = %d\n", getHead(*q)->value, getTail(*q)->value);
	freeQueue(q);
}