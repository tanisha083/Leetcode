class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int icecream=0,i=0;
        while(coins>=0 && i<costs.size()){
                coins-=costs[i++];
                icecream++;    
            }
        if (coins<0){
            return icecream-1;
        }
        return icecream;  
    }
};
// https://leetcode.com/problems/maximum-ice-cream-bars/description/