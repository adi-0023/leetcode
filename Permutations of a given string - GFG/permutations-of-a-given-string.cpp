//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	   
    void permute(string s,int l,int r,set<string>&st)
    {
        if(l==r)
        {
            st.insert(s);
        }
        else{
            for(int i=l;i<=r;i++)
            {
                swap(s[l],s[i]);
                permute(s,l+1,r,st);
                swap(s[l],s[i]);
            }
        }
    }
		vector<string>find_permutation(string S)
		{
		    int i=0;
            int n=S.length()-1;
            vector<string>ans;
            set<string>st;
            permute(S,i,n,st);
            for(auto it:st)
            {
                ans.push_back(it);
            }
            return ans;
        }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends