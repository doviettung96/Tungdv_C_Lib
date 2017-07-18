#include "graph.h"
#include <stdio.h>
#include <stdlib.h>

Graph* initGraph(int vertices) {
	Graph *g = (Graph *)malloc(sizeof(Graph));
	g->vertices = vertices;
	g->adjLists = (sllist *)malloc(sizeof(sllist) * vertices);
	for (int i = 0; i < vertices; ++i) {
		sllist *newList = initList();
		g->adjLists[i] = *newList;
	}
	return g;
}

void addEdge(Graph *g, int src, int dest) {
	append(&g->adjLists[src], dest);
	append(&g->adjLists[dest], src);
}

void printGraph(Graph* g)
{
	for (int i = 0; i < g->vertices; ++i)
	{
		printf("\n Adjacency list of vertex %d\n head ", i);
		traverse(g->adjLists[i], displayNode);
		printf("\n");
	}
}

void freeGraph(Graph *g) {
	// for (int i = 0; i < g->vertices; ++i) {
		// freeList(&g->adjLists[i]);
	// }
	free(g->adjLists);
	free(g);
}