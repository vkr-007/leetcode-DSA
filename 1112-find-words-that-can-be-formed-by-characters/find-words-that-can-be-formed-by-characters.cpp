class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans=0;
        vector<int> freq(26,0);
        for(auto x:chars){
             freq[x-'a']++;
        }
        for(auto word:words){
            vector<int>f2(26,0);
            bool p=true;
            for(auto x:word){
                f2[x-'a']++;
                if(f2[x-'a']>freq[x-'a']){
                    p=false;
                    break;
                }
            }
            if(p){
                ans+=word.size();
            }


        }
        return ans;
    }
};