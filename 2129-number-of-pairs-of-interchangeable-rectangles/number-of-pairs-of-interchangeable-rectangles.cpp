class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<pair<int,int>,long long> mp;
         long long ans = 0;
        for(auto x:rectangles){
            int w=x[0];
            int h=x[1];
            int g= gcd(w,h);
            w/=g;
            h/=g;
            ans+=mp[{w,h}];
            mp[{w,h}]++;
        }
        return ans;
    }
};