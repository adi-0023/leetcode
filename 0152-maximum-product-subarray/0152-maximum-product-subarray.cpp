class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro=1;
        int max_val=INT_MIN;
        
        //left to right traversal
        for(int i=0;i<nums.size();i++)
        {
            if(pro==0)//if prod becomes 0, prod is reset to 1
                pro=1;
            
            pro=pro*nums[i];
            max_val=max(max_val,pro); 
        }
        
        //right to left
        pro=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(pro==0)
                pro=1;
            
            pro=pro*nums[i];
            max_val=max(max_val,pro);
        }
        
        return max_val;
        
    }
    
};