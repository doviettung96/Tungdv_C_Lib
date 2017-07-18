#include "graph.h"
#include "queue.h"
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
}

void DFSUtil(Graph g, int vertex, int visited[]) {
	visited[vertex] = 1;
	printf("%d ", vertex);

	for (int i = 0; i < getLength(g.adjLists[vertex]); ++i) {
		Node *node = getNode(g.adjLists[vertex], i);
		if (visited[node->value] == 0)
			DFSUtil(g, node->value, visited);
	}
}

void DFS(Graph g, int vertex) {
	int visited[g.vertices];
	for (int i = 0; i < g.vertices; ++i) {
		visited[i] = 0;
	}
	printf("Depth first search order from %d: \n", vertex);
	DFSUtil(g, vertex, visited);
	printf("\n");
}

void BFS(Graph g, int vertex) {
	int visited[g.vertices];
	for (int i = 0; i < g.vertices; ++i) {
		visited[i] = 0;
	}

	Queue *q = initQueue();

	visited[vertex] = 1;
	enqueue(q, vertex); // after marked as visited, push it into a queue

	printf("Breadth first search order from %d: \n", vertex);
	while (!isQEmpty(*q)) {
		Node* currentNode = dequeue(q);
		printf("%d ", currentNode->value);

		// enqueue all adjacent nodes of the current node
		for (int i = 0; i < getLength(g.adjLists[currentNode->value]); ++i) {
			Node *adjToCurrent = getNode(g.adjLists[currentNode->value], i);
			if (visited[adjToCurrent->value] == 0){
				visited[adjToCurrent->value] = 1;
				enqueue(q, adjToCurrent->value);
			}
		}
	}
	printf("\n");
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