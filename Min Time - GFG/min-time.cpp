//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int>left,right;
    long long dp[100001][3];
    
    long long solve(int pos, vector<int> &types, int ind, int flag){
        if(ind>=types.size())return abs(pos);
        if(dp[ind][flag]!=-1)return dp[ind][flag];
        
        long long op1 = abs(pos-right[types[ind]])+abs(right[types[ind]]-left[types[ind]]) + solve(left[types[ind]],types,ind+1,0);
        long long op2 = abs(pos-left[types[ind]])+abs(left[types[ind]]-right[types[ind]]) + solve(right[types[ind]],types,ind+1,1);
        
        return dp[ind][flag] = min(op1,op2);
    }
    
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        left.resize(1e5+1,INT_MAX),right.resize(1e5+1,INT_MIN);
        memset(dp,-1,sizeof(dp));
        set<int>st;
        for(int i=0;i<n;i++){
            left[types[i]] = min(left[types[i]],locations[i]);
            right[types[i]] = max(right[types[i]],locations[i]);
            st.insert(types[i]);
        }
        vector<int>temp;
        for(auto it: st)temp.push_back(it);
        
        return solve(0,temp,0,2);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> locations(n);
        for(int i=0;i<n;i++){
            cin>>locations[i];
        }
        
        
        vector<int> types(n);
        for(int i=0;i<n;i++){
            cin>>types[i];
        }
        
        Solution obj;
        long long res = obj.minTime(n, locations, types);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends