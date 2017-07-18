#ifndef _GRAPH_
#define _GRAPH_

#include "sllist.h"

typedef struct {
	int vertices; // number of vertices
	sllist* adjLists;
} Graph;

Graph* initGraph(int vertices);
void addEdge(Graph *g, int src, int dest);
void DFS(Graph g, int vertex);
void DFSUtil(Graph g, int vertex, int visited[]);
void BFS(Graph g, int vertex);
void printGraph(Graph* g);
void freeGraph(Graph *g);

#endif