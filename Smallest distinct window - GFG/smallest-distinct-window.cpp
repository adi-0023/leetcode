//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        unordered_map<char,int> mp,mp1;
        int i=0,j=0,ans =INT_MAX;
        for(auto it: str) mp[it]++;
        
        while(j<str.size()){
            mp1[str[j]]++;
            
            while(mp1.size()==mp.size()){
                ans = min(ans,j-i+1);
                mp1[str[i]]--;
                if(mp1[str[i]]==0) mp1.erase(str[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends