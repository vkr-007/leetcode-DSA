class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        int op=0;
        for(auto x:tasks)
        {
            mp[x]++;}
        for(auto p:mp){
            int t=p.second;
            if(t==1){
                return -1;
            }

            op += (t + 2) / 3;

        }
    return op;
    }
};