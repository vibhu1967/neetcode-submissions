class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int, int>>> p;
        for(auto& nums:points){
            int dist=nums[0]*nums[0]+nums[1]*nums[1];
            p.push({dist,{nums[0],nums[1]}});
            if(p.size()>k){
            p.pop();
            }
        }
        while(!p.empty()){                                      ans.push_back({p.top().second.first,p.top().second.second});
        p.pop();
        }
        return ans;
        
    }
};
