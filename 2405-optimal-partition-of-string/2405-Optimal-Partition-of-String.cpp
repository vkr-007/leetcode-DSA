class Solution {
public:
    int partitionString(string s) {
        int ans=1;
      vector<int> vis(26,0);
      for(auto x:s){
        if(vis[x-'a']){
            ans++;
            fill(vis.begin(),vis.end(),0);
        }
        vis[x-'a']=1;
      }
      return ans;

    }
};