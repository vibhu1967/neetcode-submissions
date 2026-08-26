class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            vector<int> v(26,0);
            string s = strs[i];
            for(int j=0;j<s.size();j++){
                v[s[j]-'a']+=1;
            }
            string key = to_string(v[0]);
            for(int i=1;i<26;i++){
                key+=','+to_string(v[i]);
            }
            m[key].push_back(s);

        }
        vector<vector<string>> result;
        for (const auto& pair : m) {
            result.push_back(pair.second);
        }
        return result;

    }
};
