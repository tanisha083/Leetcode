// https://leetcode.com/problems/rotate-array/submissions/874278105/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copy(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            copy[(i+k)%nums.size()]=nums[i];
        }
        nums=copy;
    }
};