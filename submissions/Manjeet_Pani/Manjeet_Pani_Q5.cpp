// Group Anagrams - https://leetcode.com/problems/group-anagrams/

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> m;
        for(int i=0;i<n;i++) {
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;
        for(auto item : m) ans.push_back(item.second);
        return ans;
    }
