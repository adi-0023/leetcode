//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int first(int arr[],int n,int x){
        int l = 0;
        int h = n-1;
        int res = -1;
        while(l<=h){
            int mid = l +(h-l)/2;
            if(arr[mid]==x){
                res = mid;
                h = mid-1;
            }
            else if(x>arr[mid]){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return res;
    }
    int last(int arr[],int n,int x){
        int l = 0;
        int h = n-1;
        int res = -1;
        while(l<=h){
            int mid = l +(h-l)/2;
            if(arr[mid]==x){
                res = mid;
                l = mid+1;
            }
            else if(x>arr[mid]){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return res;
    }
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int fi = first(arr,n,x);
	    int li = last(arr,n,x);
	    if(fi == -1 || li==-1){
	        return 0;
	    }
	    else{
	        int size = li - fi + 1;
	        return size;
	    }
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends