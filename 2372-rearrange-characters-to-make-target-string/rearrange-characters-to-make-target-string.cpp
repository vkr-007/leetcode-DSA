class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> f1(26,0);
        vector<int> f2(26,0);
        for(auto x:s){
            f1[x-'a']++;
        }
        for(auto x:target){
            f2[x-'a']++;
        }
        int ans=INT_MAX;
        for(int i=0;i<26;i++){
            if(f2[i]>0){
                ans=min(ans,f1[i]/f2[i]);
            }
        }
        return ans;
    }
};