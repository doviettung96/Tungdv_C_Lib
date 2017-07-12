#include <DataStructure/sllist.h>
#include <stdio.h>

void main(){
	sllist *list = initList();
	append(list, 1);
	insert(list, 3, 1);	
	append(list, 2);
	traverse(*list, displayNode);
	printf("\nLength = %d\n", getLength(*list));
	int searchPosition = 0;
	printf("Get node at %d: value = %d\n", searchPosition, getNode(*list, searchPosition)->value);
	int searchValue = 0;
	printf("Get node with value %d: position = %d\n", searchValue, getPosition(*list, searchValue));
	int deletedPosition = 0;
	deleteNode(list, deletedPosition);
	printf("After delete element at position: %d\n", deletedPosition);
	traverse(*list, displayNode);
	printf("\nLength = %d\n", getLength(*list));
	freeList(list);
}
