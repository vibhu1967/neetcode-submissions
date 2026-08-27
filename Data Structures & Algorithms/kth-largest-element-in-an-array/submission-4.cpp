class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        k=nums.size()-k;
        return selection(nums,0,nums.size()-1,k);
    }
    int selection(vector<int>& nums,int left,int right, int k){
        int pivot=nums[right];
        int p=left;
        for(int i=left;i<right;++i){
            if(nums[i]<=pivot){
                swap(nums[p],nums[i]);
                p++;
            }
        }
        swap(nums[p],nums[right]);
        if(k<p){
            return selection(nums,left,p-1,k);
        }else if(k>p){
            return selection(nums,p+1,right,k);
        }else{
            return nums[p];
        }
    }
};
