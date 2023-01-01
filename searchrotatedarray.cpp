// https://leetcode.com/problems/search-in-rotated-sorted-array/description/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        int mid=0,comp=0;
        while(l<h){
            mid = (h+l)/2;
            comp=nums[mid];
            if(!((nums[mid] < nums[0]) == (target < nums[0]))){
                if (target<nums[0]) comp = INT_MIN;
                else comp = INT_MAX;
            }
            if (comp == target) return mid ;
            else if (comp<target) l=mid+1;
            else h=mid-1;
        }
        if (l==h && nums[l]==target) return l;
        return -1;   
    }
};