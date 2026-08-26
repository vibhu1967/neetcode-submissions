class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m;
        for(int i=0; i<s.size();i++){
            m[s[i]]+=1;
        }
        for(int i=0; i<t.size();i++){
            m[t[i]]-=1;
        }
        
        for(auto& ch:m){
            if(ch.second != 0){
                return false;
            }
        } 
        return true;

    }
};
