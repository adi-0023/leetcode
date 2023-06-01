//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        int mod=1000000007;
        int prev2=1;
        int prev=1;
        int cur=0;
        if(n==0 || n==1)    return 1;
        for(int i=2;i<=n;i++)
        {
            cur=(prev+prev2)%mod;
            prev2=prev%mod;
            prev=cur%mod;
        }
        return prev;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends