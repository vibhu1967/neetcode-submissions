class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] nums2 = new int[2*nums.length];
        int n=nums.length;
        for(int i=0;i<2*n;i++){
            if(i<n){
                nums2[i]=nums[i];
            }else{
                nums2[i]=nums[i-n];
            }
        }
        return nums2;
    }
}