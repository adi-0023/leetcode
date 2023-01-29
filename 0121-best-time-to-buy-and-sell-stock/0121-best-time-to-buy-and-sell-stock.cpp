class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxip = 0;
        for(int i = 0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            maxip= max(maxip ,prices[i] - mini);
            
        }
        return maxip;
    }
};