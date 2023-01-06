class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int s=0;
        int m=matrix.size();
        int n=matrix[0].size();

        int h=m*n-1;
        int mid=s+(h-s)/2;

        while(s<=h){
            int element=matrix[mid/n][mid%n];
            if(element==target)
              return true;
            
            else if(element<target)
             s = mid+1;
            
             else 
             h=mid-1;
            
             mid=s+(h-s)/2;
        }
        return false;
    }
        
    
};

