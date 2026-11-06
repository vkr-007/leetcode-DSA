class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
       int ans=0;
       for(int i=0;i<points.size();i++){
        unordered_map<int,int> mp;
        for(int j=0;j<points.size();j++){
              int dx = points[i][0] - points[j][0];
                int dy = points[i][1] - points[j][1];

                int dis = dx*dx + dy*dy;

                mp[dis]++;
        }
        for(auto x:mp){
            int c=x.second;
            ans+=c*(c-1);
        }

       }
       return ans; 
    }
};