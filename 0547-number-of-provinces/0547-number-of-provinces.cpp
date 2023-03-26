class Solution {
private:
    void dfs(int node, vector<vector<int>>&adjList, vector<bool>&vis){
        vis[node] = 1;

        for(auto it : adjList[node]){
            if(!vis[it]){
                dfs(it, adjList, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        int m = isConnected[0].size();
        vector<vector<int>>adjList(n);

        

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(i != j && isConnected[i][j]){
                    adjList[i].push_back(j);
                    
                }
            }
        }

        vector<bool>vis(n, false);
        int count = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                count++;
                dfs(i, adjList, vis);
            }
        }
        return count;
    }
};