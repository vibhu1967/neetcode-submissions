class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        dfs(0,s,curr,ans);
        return ans;
    }
    void dfs(int i,string s,vector<string>& curr,vector<vector<string>>& ans){
        if(i>=s.size()){
            ans.push_back(curr);
            return;
        }
        for(int j=i;j<s.size();j++){
            if(ispalin(s,i,j)){
                curr.push_back(s.substr(i,j-i+1));
                dfs(j+1,s,curr,ans);
                curr.pop_back();
            }
        }
    }
    bool ispalin(string& s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
