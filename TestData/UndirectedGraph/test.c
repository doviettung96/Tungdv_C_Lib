#include <DataStructure/graph.h>
#include <stdio.h>

void main() {
	Graph *g = initGraph(5);
	addEdge(g, 0, 1);
	addEdge(g, 0, 4);
	addEdge(g, 1, 2);
	addEdge(g, 1, 3);
	addEdge(g, 1, 4);
	addEdge(g, 2, 3);
	addEdge(g, 3, 4);

	printGraph(g);
	freeGraph(g);
}