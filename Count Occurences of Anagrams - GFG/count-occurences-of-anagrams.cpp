//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int i=0;
	    int j=0;
	    int l = pat.size();
	    map<char,int> mpp;
	    for(int i=0;i<l;i++){
	        mpp[pat[i]]++;
	    }
	    int ans =0;
	    int cnt =mpp.size();
	    while(j<txt.size()){
	        if(j-i+1<l){
	            mpp[txt[j]]--;
	            if(mpp[txt[j]]==0) cnt--;
	            
	            j++;
	        }
	        else if(j-i+1==l){
	            mpp[txt[j]]--;
	            if(mpp[txt[j]]==0) cnt--;
	            if(cnt==0) ans++;
	            
	            //sliding the window
	            mpp[txt[i]]++;
	            if(mpp[txt[i]]==1) cnt++;
	            
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends