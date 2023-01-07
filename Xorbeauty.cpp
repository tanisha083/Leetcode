// https://leetcode.com/contest/biweekly-contest-95/problems/find-xor-beauty-of-array/
class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res;
    }
};