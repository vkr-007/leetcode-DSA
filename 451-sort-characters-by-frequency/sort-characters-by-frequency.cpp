class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto x: s){
            mp[x]++;
        }
        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(),v.end(),[](pair<char,int>&a, pair<char,int> &b){
             return a.second>b.second;
        });
        string ans;
        for(auto x: v){
            while(x.second>0){
                ans+=x.first;
               x.second--;
            }
        }
        return ans;
    }
};