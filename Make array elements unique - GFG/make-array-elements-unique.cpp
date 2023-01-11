//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        long long int ans=0;

        map<int,int>mp;

        for(auto x:arr){

            mp[x]++;

        }

        for(auto x:mp){

            if(x.second>1){

              ans+=(x.second-1);

              mp[x.first+1]+=(x.second-1);

            }

        }

        return ans;

    }
        // Code here
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends