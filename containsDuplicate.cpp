class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool res=false;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                res = true;
            }
            
        }    
        
        return res;   
    }
};
// https://leetcode.com/problems/contains-duplicate/submissions/784973140/