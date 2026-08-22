class Solution {
public:
    int maxVowels(string s, int k) {
        int v=0;//sliding winow to count vowels
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
              v++;
            }
        }
        int vi=v;
        for(int i=k;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
              vi++;
            }
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
              vi--;
            }
            v= max(vi,v);
        }
        return v;
    }
};