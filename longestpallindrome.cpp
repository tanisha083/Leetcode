class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++){
            if(map.find(s[i])!=map.end()){
                map[s[i]]++;
            }
            else{
                map[s[i]]=1;
            }
        }
        int ans=0,odd=0;
        cout<<s.length()<<endl;
        if(s.length()==1){
            return 1;
        }
        
        for(auto j:map){
            cout<<j.first<<' '<<j.second<<endl;
            if(int(j.second/2)!=0){
                ans+=(int(j.second/2)*2);
                cout<<j.second<<endl;    
            }
            if(j.second%2!=0 || j.second==1){
                odd=1;
                cout<<"odd"<<" "<<odd<<endl;}
        }
        return odd?ans+1:ans;
    }
};
// https://leetcode.com/problems/longest-palindrome/description/