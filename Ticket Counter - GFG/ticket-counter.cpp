//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        int i=1;
        int j=N;
        int ans=i;
        while(i<=j){
            int k=K;
            while(i<=j && k--){
                ans=i;
                i++;
            }
            k=K;
            while(i<=j && k--){
                ans=j;
                j--;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends