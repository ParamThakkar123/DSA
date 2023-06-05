#include <bits/stdc++.h>
using namespace std;

class Graph{
  int numofvertices;
  list<int>* adjList;
  bool* visited;
  
  public:
    Graph(int vertices);
    void AddEdge(int src, int dest);
    void BFS(int startVertex);
}

Graph::Graph(int vertices){
  numVertice = vertices;
  adjList = new list<int>[vertices];
}

void Graph:: AddEdge(int src, int dest){
  visited = new bool[numVertices];
  for(int i = 0; i < numVertices; i++){
    visited[i] = false;
  }
  
  list<int> queue;
  
  visited[startVertex] = true;
  queue.push_back(startVertex);
  
  list<int>::iterator i;
  
  while(!queue.empty()){
    int currVertex = q.front();
    cout << "Visited" << currVertex << " ";
    queue.pop_front();
  }
  
  for(int i = adjList[currVertex].begin(); i != adjList[currVertex].end(); i++){
    int adjVertex = *i;
    if(!visited[adjVertex]){
      visited[adjVertex] = true;
      queue.push_back(adjVertex);
    }
  }
}

int main(){
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.addEdge(3, 3);

  g.BFS(2);

  return 0;
}
