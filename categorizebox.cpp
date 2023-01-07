class Solution {
public:
    string categorizeBox(long long l, long long w, long long h, long long m) {
        int i=0,j=0;
        if ((l>=pow(10,4)) || (w>=pow(10,4)) || (h>=pow(10,4)) || (m>=pow(10,4)) || ((l*w*h)>=pow(10,9))){
             i=1;
        }
        if (m>=100){
             j=1;
        }
        if (i==1 && j==1){
            return "Both";
        }
        else if (i==1 && j==0){
            return "Bulky";
        }
        else if (i==0 && j==1){
            return "Heavy";
        }
        return "Neither";
        
        
    }
};
// https://leetcode.com/contest/biweekly-contest-95/problems/categorize-box-according-to-criteria/