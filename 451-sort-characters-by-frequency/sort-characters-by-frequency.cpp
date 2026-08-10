class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto x: s){
            mp[x]++;
        }
        vector<vector<char>> buc(s.size()+1);
        for(auto x:mp){
            buc[x.second].push_back(x.first);
        }
        string ans;
        for(int i= s.size();i>=1;i--){
            for(auto c:buc[i]){
                for(int j=0;i>j;j++){
                    ans+=c;
                }
            }
        }
        return ans;
    }
};