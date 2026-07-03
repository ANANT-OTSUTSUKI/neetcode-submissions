class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,int> mp;
        int ind=0;
        for(auto s:strs){
            string w = s;
            sort(w.begin(),w.end());
            auto it=mp.find(w);
            if(it!=mp.end()){
                ans[it->second].push_back(s);
            }
            else{
                mp[w]=ind;ind++;
                ans.push_back({s});
            }
        }
        return ans;
    }
};
