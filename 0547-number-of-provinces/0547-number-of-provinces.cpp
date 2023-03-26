class Solution {
public:
   void dfs(int i,vector<int>&vis,vector<int>adjl[]){
       vis[i]=1;
       for(auto it:adjl[i]){
           if(!vis[it]){
               dfs(it,vis,adjl);
           }
       }
   }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int V=isConnected[0].size();
        vector<int>adjl[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if( isConnected[i][j]==1 && i!=j){
                adjl[i].push_back(j);
                adjl[j].push_back(i);
                }
            
            }

        }
        int cnt=0;
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,adjl);
            }
        }
        return cnt;
    }
};