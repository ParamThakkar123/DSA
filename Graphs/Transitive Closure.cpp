class Solution{
public:
    void dfs(int node, vector<int> adjList[], vector<int> &temp){
        temp[node] = 1;
        for(auto it : adjList[node]){
            if(!temp[it]){
                dfs(it, adjList, temp);
            }
        }
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        int n = graph.size();
        int m = graph[0].size();
        vector<vector<int>> visited;
        vector<int> adjList[n];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(graph[i][j] == 1){
                    adjList[i].push_back(j);
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            vector<int> temp(n, 0);
            dfs(i, adjList, temp);
            visited.push_back(temp);
        }
        
        return visited;
    }
};
