class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string stack;
        dfs(0,0,n,stack,ans);
        return ans;
    }
    void dfs(int countC,int countO,int n,string& stack,vector<string>& ans){
        if(countC==countO && countO==n){
            ans.push_back(stack);
            return;
        }
        if(countO<n){
            stack+='(';
            dfs(countC,countO+1,n,stack,ans);
            stack.pop_back();
        }
        if(countC<countO){
            stack+=')';
            dfs(countC+1,countO,n,stack,ans);
            stack.pop_back();
        }
    }
};
