// https://leetcode.com/problems/3sum/description/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if (nums.size()<3){
            return {};
        }
        if (nums[0]>0){
            return {};
        }
        vector<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            if (nums[i]>0){
                break;
            }
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int low=i+1;
            int high=nums.size()-1;
            int sum=0;
            while(low<high){
                sum=nums[i]+nums[low]+nums[high];
                if(sum>0){
                    high--;
                }
                if (sum<0){
                    low++;
                }
                else if( sum==0){
                    ans.push_back({nums[i],nums[low],nums[high]});
                    int last_lo=nums[low],last_hi=nums[high];
                    while(low<high && nums[low]==last_lo){
                        low++;
                    }
                    while(low<high && nums[high]==last_hi){
                        high--;
                   }
                }
                    


            }
        }
        return ans;
    }
};