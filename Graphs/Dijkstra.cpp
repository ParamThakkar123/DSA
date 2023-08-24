#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;

void addEdge(vector<pair<int, int> > adj[], int u, int v,
             int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

void dijkstra(int s, int V, vector<pair<int, int>> adj[]){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    vector<int> dist(V, INF);
    pq.push(make_pair(0, s));
    dist[s] = 0;
    
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        
        for(auto x : adj[u]){
            int v = x.first;
            int weight = x.second;
            
            if(dist[v] > dist[u] + weight){
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    
    for(int i = 0; i < V; i++){
        cout << i << endl;
        cout << dist[i] << " ";
    }
}

int main(){
     int V = 9;
    vector<pair<int, int>> adj[V];
 
    // making above shown graph
    addEdge(adj, 0, 1, 4);
    addEdge(adj, 0, 7, 8);
    addEdge(adj, 1, 2, 8);
    addEdge(adj, 1, 7, 11);
    addEdge(adj, 2, 3, 7);
    addEdge(adj, 2, 8, 2);
    addEdge(adj, 2, 5, 4);
    addEdge(adj, 3, 4, 9);
    addEdge(adj, 3, 5, 14);
    addEdge(adj, 4, 5, 10);
    addEdge(adj, 5, 6, 2);
    addEdge(adj, 6, 7, 1);
    addEdge(adj, 6, 8, 6);
    addEdge(adj, 7, 8, 7);
 
    dijkstra(0, V, adj);
}
