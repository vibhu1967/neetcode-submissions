class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(),nums.end());
        dfs(nums,ans,curr,0);
        return ans;
    }
    void dfs(vector<int>& nums,vector<vector<int>>& ans,vector<int>& curr,int i){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        dfs(nums,ans,curr,i+1);
        curr.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]){
            i++;
        }
        dfs(nums,ans,curr,i+1);
    }
};
