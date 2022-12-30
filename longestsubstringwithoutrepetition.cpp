// https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/868049456/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length();
        int ans = 0;
        unordered_map<char,int> map;

        for( int i=0,j=0 ; j<size ; j++){
            if( map[s[j]] >0){
                i = max(map[s[j]],i);
            }
            ans = max(ans,j-i+1);
            map[s[j]] = j+1;
        }
        return ans;
    }
};