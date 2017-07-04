#include "sllist.h"
#include <stdio.h>

sllist *initList(){
	sllist *newList;
	*newList.root = NULL;
	*newList.cur = NULL;
	*newList.last = NULL;
	return newList;
}

void append(sllist *list, Node *newNode){
	Node *last = *list.last;
	*last.next = newNode;
}

Node *get(sllist *list, int position){
	
}