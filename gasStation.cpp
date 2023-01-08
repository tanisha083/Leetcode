class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0,total_cost=0,s=0,curr_gas=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
            curr_gas+=gas[i]-cost[i];
            if(curr_gas<0){
                    s=i+1;
                    curr_gas=0;
            }
        }
        return (total_gas<total_cost)?-1:s;    
            
    }
};
// https://leetcode.com/problems/gas-station/description/