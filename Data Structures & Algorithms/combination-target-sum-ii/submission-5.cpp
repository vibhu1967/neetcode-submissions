class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        ans.clear();
        sort(candidates.begin(),candidates.end());
        dfs(candidates,ans,curr,0,target,0);
        return ans;
    }
    void dfs(vector<int>& candidates,vector<vector<int>>& ans,vector<int>& curr,int i,int target,int total){
        if(target==total){
            ans.push_back(curr);
            return;
        }
        if(i==candidates.size() || total>target){
            return;
        }
        curr.push_back(candidates[i]);
        dfs(candidates,ans,curr,i+1,target,total+candidates[i]);
        curr.pop_back();
        while(i+1<candidates.size() && candidates[i]==candidates[i+1]){
            i++;
        }
        dfs(candidates,ans,curr,i+1,target,total);

    }
};
