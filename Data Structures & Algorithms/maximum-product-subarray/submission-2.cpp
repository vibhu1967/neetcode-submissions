class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=nums[0];
        int mini=1,maxi=1;
        for(int i=0;i<nums.size();i++){
            int tmp=maxi*nums[i];
            maxi=max(max(nums[i]*maxi,nums[i]*mini),nums[i]);
            mini=min(min(tmp,nums[i]*mini),nums[i]);
            res=max(res,maxi);
        }
        return res;
    }
};
