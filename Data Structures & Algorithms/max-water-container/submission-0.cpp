class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxleft,maxright=0;
        int i=0;
        int j=heights.size()-1;
        int ans=0;
        while(i<j){
            maxleft=heights[i];
            maxright=heights[j];
            ans=max(ans,(j-i)*min(maxleft,maxright));
            if(maxleft>maxright){
                j--;
            }else{
                i++;
            }
        }
        return ans;
    }
};
