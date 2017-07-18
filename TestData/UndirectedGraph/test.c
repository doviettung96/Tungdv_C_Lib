#include <DataStructure/graph.h>
#include <stdio.h>

void main() {
	Graph *g = initGraph(6);
	addEdge(g, 5, 2);
    addEdge(g, 5, 0);
    addEdge(g, 4, 0);
    addEdge(g, 4, 1);
    addEdge(g, 2, 3);
    addEdge(g, 3, 1);

	DFS(*g, 2);
	BFS(*g, 2);
	topologicalSort(*g);
	freeGraph(g);
}