class Solution {
public:
    int trap(vector<int>& height) {
          

        // code here
        int n = height.size();
        long long ans =0;

        int l[n],r[n];

        l[0]=height[0];

        for(int i=1;i<n;i++){

            l[i]=max(l[i-1],height[i]);

        }

        r[n-1]=height[n-1];

        for(int i=n-2;i>0;i--){

            r[i]=max(r[i+1],height[i]);

        }

        for(int i=0;i<n;i++){

            ans +=max(0,min(l[i],r[i])-height[i]);

        }

        return ans;

    
        
    }
};