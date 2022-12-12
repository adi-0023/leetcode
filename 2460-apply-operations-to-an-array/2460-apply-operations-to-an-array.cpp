class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int>res;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]<<1;
                nums[i+1]=0;
            }
        }
        
        int ct=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) ct++;
            else res.push_back(nums[i]);
        }
        while(ct--){
            res.push_back(0);
        }
        return res;
    }
};