class Solution {
public:
    int totalSteps(vector<int>& nums) {
        stack<pair<int,int>> st;
        int ans=0;
        for(auto x:nums){
            int s=0;
            while(!st.empty() && st.top().first<=x){
                  s= max(s,st.top().second);
                  st.pop();
            }
            if(!st.empty()){
                s++;
            }
            ans=max(ans,s);
            st.push({x,s});
        }
        return ans;
    }
};