void bfs(int srow, int scol, string &s, vector<vector<int>> &vis, vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();
        
        s.push_back(srow - row - '0');
        s.push_back(scol - col - '0');
        
        queue<pair<int, int>> q;
        q.push({srow, scol});
        vis[srow][scol] = 1;
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i = 0; i < 4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 && nrow < n; && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                    s.push_back(nrow - srow - '0');
                    s.push_back(ncol - scol - '0');
                    q.push({nrow, ncol});
                }
            }
        }
        return;
    }
