class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxcur=0;
        int max_so_far=0;
        for(int i=1;i<prices.size();i++){
            maxcur=max(0,maxcur+=prices[i]-prices[i-1]);
            max_so_far=max(maxcur,max_so_far);    
            }
        
        
        return max_so_far ;
    }
};
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/748691823/