#include <DataStructure/graph.h>
#include <stdio.h>

void main() {
	Graph *g = initGraph(4);
	addEdge(g, 0, 1);
	addEdge(g, 0, 2);
	addEdge(g, 1, 2);
	addEdge(g, 2, 0);
	addEdge(g, 2, 3);
	addEdge(g, 3, 3);

	DFS(*g, 2);
	BFS(*g, 2);
	freeGraph(g);
}