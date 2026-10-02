class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int>mp;
        int ans=0;
        for(int i=0;i+minSize<=s.size();i++){
            string temp= s.substr(i,minSize);
            unordered_set<char> st(temp.begin(),temp.end());
    
            if(st.size()<=maxLetters){
                mp[temp]++;
                ans=max(ans,mp[temp]);
            }

        }
        return ans;
    }
};