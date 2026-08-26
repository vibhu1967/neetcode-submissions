class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int k=stones[stones.size()-1]-stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            if(k>0){
                stones.push_back(k);
            }
        }
        stones.push_back(0);
        return stones[0];
    }
};
