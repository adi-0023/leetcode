//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  static int findPivot(vector<int>&arr, int n) {

    int pivot = 0;

    for(int i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            pivot = i+1;
        }
    }
    return pivot;

    }

    static int binarySearch(vector<int>&arr, int s, int e, int key) {

        int start = s;
        int end = e;
        int mid = start+(end-start)/2;
        while(start<=end) {
            if(arr[mid] == key) {
                return mid;
            }
            if(key > arr[mid]) {
                start = mid+1;
            }
            else {
                end = mid-1;
            }
            mid = start+(end-start)/2;
        }
        return -1;
    }
    bool Search(int N, vector<int>& A, int Key) {
        int p = findPivot(A, N);
        int ans = -1;
        if(Key >= A[p] && Key <= A[N-1]) {
            ans = binarySearch(A, p, N-1, Key);
        } 
        else {
            ans = binarySearch(A, 0, p-1, Key);
        }
        return ans != -1 ? true : false;

    }
        // Code here
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int key;
        cin >> key;

        Solution obj;
        cout << obj.Search(n, a, key) << "\n";
    }
    return 0;
}
// } Driver Code Ends