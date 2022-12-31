//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
    int start =0;
    int end = n-1;
    int first = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid]==x){
            first = mid;
            end = mid-1;
        }
        else if(x<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    v.push_back(first);
    
    //last 
    int start1 =0;
    int end1 = n-1;
    int last = -1;
    while(start1 <= end1){
        int mid = start1 + (end1-start1)/2;
        if(arr[mid]==x){
            last = mid;
            start1 = mid+1;
        }
        else if(x<arr[mid]){
            end1 = mid-1;
        }
        else{
            start1 = mid+1;
        }
    }
    v.push_back(last);
    
    return v;
    // code here
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends