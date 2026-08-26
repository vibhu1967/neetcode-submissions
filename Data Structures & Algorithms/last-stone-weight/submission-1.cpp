class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p;
        for(auto num:stones){
            p.push(num);
        }
        while(p.size()>1){
            int first=p.top();
            p.pop();
            int second=p.top();
            p.pop();
            int k=first-second;
            if(k>=1){
                p.push(k);
            }
            
        }
        p.push(0);
        return p.top();
    }
};
