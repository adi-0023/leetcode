class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int counter = 0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i]>coins)break;
            coins -= costs[i];
            counter++;
        }
        return counter;
    
    }
};