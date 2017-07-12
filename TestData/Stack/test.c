#include <DataStructure/stack.h>
#include <stdio.h>

void main(){
	Stack *s = initStack();
	push(s, 1);
	push(s, 2);
	printf("Top = %d\n", getTop(*s)->value);
	printf("Pop %d\n",pop(s)->value);
	printf("Top = %d\n", getTop(*s)->value);
	freeStack(s);
}