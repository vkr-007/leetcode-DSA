class Solution {
public:
    int maximumLengthSubstring(string s) { 
        int i=0,ans=0;
        vector<int> count(26,0);
        for(int j=0;j<s.size();j++){
            count[s[j]-'a']++;
            while(count[s[j]-'a']>2){
                count[s[i]-'a']--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};