class Solution {
public:
    int minimumPushes(string word) {
       unordered_map<char, int> m;
        int n=word.size();
        for(auto x:word ){
            m[x]++;
        }
        vector<pair<char, int>> mp(m.begin(), m.end());
        sort(mp.begin(),mp.end(),[](auto &a,auto &b){
            return a.second>b.second;
        }  );
        int ans=0;
        int i=0;
        for(auto x:mp){
            ans+=((i/8)+1)*x.second;
            i++;
        }
        return ans;
    }
};