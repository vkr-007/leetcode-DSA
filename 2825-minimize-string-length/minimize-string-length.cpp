class Solution {
public:
    int minimizedStringLength(string s) {
       int f[26]={0};
       for(char x: s){
        f[x-'a']++;
       }
       int ans=0;
       for(int i=0;i<26;i++){
        if(f[i]!=0)ans++;
       }
       return ans;
    }
};