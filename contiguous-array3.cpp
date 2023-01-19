class Solution {
public:
    int findMaxLength(vector<int>& nums) {
		unordered_map<int,int> map;
        map[0]=-1;
        int sum=0,maxlen=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum--;
            }
            else{
                sum++;
            }
            if(map.count(sum)){
                maxlen=max(maxlen,i-map[sum]);
            }
            else{
                map[sum]=i;
            }
        }
        return maxlen;}
};
// https://leetcode.com/problems/contiguous-array/submissions/881141415/