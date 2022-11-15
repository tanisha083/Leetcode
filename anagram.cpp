// https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        string *sp=&s;
        string *tp=&t;
        sort(sp->begin(),sp->end());
        sort(tp->begin(),tp->end());
        if (s==t){
            return true;
           }
        else{
            return false;
        }
        
    }
};