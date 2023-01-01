class Solution {
public:
    int getPivot(vector<int> &nums){
        int s=0;
        int e = nums.size();
        e-=1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0])
            s=mid+1;
            else
            e=mid;
            mid=s+(e-s)/2;
        }
        return(s);
    }
    int binarySearch(vector<int> &nums,int s,int e,int key){
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==key)
            return mid;
            else if(key>nums[mid])
            s=mid+1;
            else
            e=mid-1;
            mid=s+(e-s)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot=getPivot(nums);
        int l=nums.size();
        if(target>=nums[pivot]&&target<=nums[l-1])
        return(binarySearch(nums,pivot,l-1,target));
        else
        return(binarySearch(nums,0,pivot-1,target));
    }
};