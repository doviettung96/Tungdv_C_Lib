#include "sllist.h"
#include <stdio.h>
#include <stdlib.h>

sllist* initList(){
	sllist *newList = (sllist *)malloc(sizeof(sllist));
	newList->root = NULL;
	newList->last = NULL;
	newList->length = 0;
	return newList;
}

void append(sllist *list, int value){
	Node *newNode = initNode(value);
	if(list->root == NULL){
		list->root = newNode;
		list->last = newNode;
	}else{
		list->last->next = newNode;
		list->last = newNode;
	}
	list->length++;
}

void insert(sllist *list, int value, int position){
	if(list->root == NULL)
		append(list, value);
	else if(position >= list->length || position < 0)
		append(list, value);
	else{
		Node *newNode = initNode(value);
		getNode(*list, position)->next = newNode;
		list->length++;
	}
}

Node* getNode(sllist list, int position){
	int i = 0;
	if(position >= list.length || position < 0){
		printf("The position is out of range.\n");
		return NULL;
	}else{
		for(Node* element = list.root; element != NULL; element = element->next){
			if(i == position){
				return element;				
			}
			++i;
		}
	}
}

int getPosition(sllist list, int value){
	int i = 0;
	for(Node *element = list.root; element != NULL; element = element->next){
		if(element->value == value)
			return i;
		++i;
	}
	printf("The list doesn't have the element with specified value\n");
	return -1;
}

void deleteNode(sllist *list, int position){
	if(position >= list->length || position < 0){
		printf("The position is out of range.\n");
	}else if(position == 0){
		Node *root = list->root;
		list->root = root->next;
		free(root);
		list->length--;
	}
	else if(list->length == 1){
		freeList(list);
	}else{
		Node *prevDeleted = getNode(*list, position - 1);
		Node *beDeleted = prevDeleted->next;
		prevDeleted->next = beDeleted->next;
		free(beDeleted);
		list->length--;
	}
}

void traverse(sllist list, void (*function)(Node *)){
	for(Node *element = list.root; element != NULL; element = element->next){
		function(element);
	}
}

int getLength(sllist list){
	return list.length;
}

void freeList(sllist *list){
	for(Node *element = list->root; element != NULL; element = element->next){
		free(element);
	}
	free(list);
}