class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        dfs(nums,res,curr,target,0,0);
        return res;
    }
    void dfs(vector<int>& nums,vector<vector<int>>& res,vector<int>& curr,int target,int i,int total){
        if(total==target){
            res.push_back(curr);
            return;
        }
        if(i>=nums.size() || total>target ){
            return;
        }
        curr.push_back(nums[i]);
        dfs(nums,res,curr,target,i,total+nums[i]);
        curr.pop_back();
        dfs(nums,res,curr,target,i+1,total);
    }
};
