class Solution {
public:
    set<pair<int,int>> check;
    int R;
    int C;
    bool exist(vector<vector<char>>& board, string word) {
        R=board.size();
        C=board[0].size();
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(dfs(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;

    }
    bool dfs(vector<vector<char>>& board, string word,int r,int c,int i){
        if(i==word.length()){
            return true;
        }
        if(r<0 || c<0 || r>=R || c>=C ||board[r][c]!=word[i] || check.count({r,c})){
            return false;
        }
        check.insert({r,c});
        bool res= dfs(board,word,r-1,c,i+1)||dfs(board,word,r+1,c,i+1)||dfs(board,word,r,c-1,i+1)||dfs(board,word,r,c+1,i+1);
        check.erase({r,c});
        return res;
    }
};
