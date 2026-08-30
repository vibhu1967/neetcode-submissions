class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> p;
        vector<bool>visited(nums.size(),false);
        dfs(nums,p,visited);
        return ans;
    }
    void dfs(vector<int>& nums,vector<int>& p,vector<bool>& visited){
        if(p.size()==nums.size()){
            ans.push_back(p);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!visited[i]){
                p.push_back(nums[i]);
                visited[i]=true;
                dfs(nums,p,visited);
                p.pop_back();
                visited[i]=false;
            }
        }
    }
};
