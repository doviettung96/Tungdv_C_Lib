#include "sllist.h"

typedef struct {
	int vertices; // number of vertices
	sllist* adjLists;
} Graph;

Graph* initGraph(int vertices);
void addEdge(Graph *g, int src, int dest);
void printGraph(Graph* g);
void freeGraph(Graph *g);