// https://leetcode.com/problems/squares-of-a-sorted-array/submissions/871455934/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int l=0,r=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
                if (abs(nums[r])>abs(nums[l])){
                    ans[i]=nums[r]*nums[r--];
                }
                else{
                    ans[i]=nums[l]*nums[l++];
                }
        }
        return ans;
    }
};