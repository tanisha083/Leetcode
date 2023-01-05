// https://leetcode.com/problems/combination-sum/description/
class Solution {
public:
    void findcomb(vector<int>& candidates,int target,vector<int> currcomb,int combsum,int currindex,vector<vector<int>>& res){
        if (combsum>target){
            return;
        }
        if (combsum==target){
            res.push_back(currcomb);
            return;
        }
        for(int i=currindex;i<candidates.size();i++){
            currcomb.push_back(candidates[i]);
            combsum+=candidates[i];
            findcomb(candidates,target,currcomb,combsum,i,res);
            currcomb.pop_back();
            combsum-=candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> currcomb;
        findcomb(candidates,target,currcomb,0,0,res);
        return res;
    }
};