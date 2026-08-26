class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r=nums.size()-1;
        int mini=nums[0];
        while(l<=r){
            if (nums[l] < nums[r]) {
                mini = min(mini, nums[l]);
                break;
            }
            int m=l+(r-l)/2;
            mini=min(mini,nums[m]);
            if(nums[l]<=nums[m]){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return mini;
    }
};
