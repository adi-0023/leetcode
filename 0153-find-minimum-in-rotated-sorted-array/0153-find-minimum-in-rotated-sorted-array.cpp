class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;	
        while(l<=h){
            if(nums[l] < nums[h]) return nums[l];
            int mid = l + (h-l)/2;
            int next = ( mid + 1 )%n;
            int prev = (mid - 1 + n)%n;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev]){
                return nums[mid];
            }
            if(nums[l]<=nums[mid]){
                l=mid+1;
            }
            if(nums[mid]<=nums[h]){
                h=mid-1;
            }
        }
        return 0;
        
    }
};