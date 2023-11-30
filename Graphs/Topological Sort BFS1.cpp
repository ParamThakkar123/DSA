class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> res;
	    vector<int> indegree(V, 0);
	    
	    for(int i = 0; i < V; i++){
	        for(int nbr : adj[i]){
	            indegree[nbr]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i = 0; i < V; i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty()){
	        int curr = q.front();
	        q.pop();
	        res.push_back(curr);
	        
	        for(int nbr : adj[curr]){
	            indegree[nbr]--;
	            if(indegree[nbr] == 0) q.push(nbr);
	        }
	    }
	    
	    return res;
	}
};
