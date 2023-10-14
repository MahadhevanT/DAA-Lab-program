#include <stdio.h>
#include <stdbool.h>
#define MAX_VERTICES 100
#define INF 9999
int graph[MAX_VERTICES][MAX_VERTICES];
int numVertices;
void primMST() {
int selected[MAX_VERTICES];
int minWeight[MAX_VERTICES];
int i;
for (i = 0; i < numVertices; i++) {
selected[i] = false;
minWeight[i] = INF; }
minWeight[0] = 0;
int count;
for (count = 0; count < numVertices - 1; count++) {
int u = -1,i;
for (i = 0; i < numVertices; i++) {
if (!selected[i] && (u == -1 || minWeight[i] < minWeight[u])) {
u = i; } }
selected[u] = true;
int v;
for (v = 0; v < numVertices; v++) {
if (graph[u][v] && !selected[v] && graph[u][v] < minWeight[v]) {
minWeight[v] = graph[u][v];
} } }
printf("Edge \tWeight\n");
for (i = 1; i < numVertices; i++) {
printf("%d - %d \t%d\n", i, selected[i], minWeight[i]); } }

int main() {
printf("Enter the number of vertices: ");
scanf("%d", &numVertices);
int i,j;
printf("Enter the adjacency matrix:\n");
for (i = 0; i < numVertices; i++) {
for (j = 0; j < numVertices; j++) {
scanf("%d", &graph[i][j]);
} }
primMST();
return 0; }