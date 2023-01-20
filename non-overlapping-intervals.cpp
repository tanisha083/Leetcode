class Solution {
public:
    static bool compare(const vector<int>& a,const vector<int>& b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        sort(intervals.begin(),intervals.end(),compare);
        vector<int> prev=intervals[0];
        for(auto i:intervals){
            if(prev[1]>i[0]){
                count++;
            }
            else{
                prev=i;
            }
        }
        return count-1;
    }
};
// https://leetcode.com/problems/non-overlapping-intervals/description/