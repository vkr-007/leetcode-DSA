class Solution {
public:
    int count(string s, char ch,int k){
        int l=0;
        int c=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                c++;
            }
            while(c>k){
                if(s[l]==ch){
                    c--;
                }
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
    int maxConsecutiveAnswers(string a, int k) {
       int tl=count(a,'F',k);
       int fl=count(a,'T',k);
       return max(tl,fl);
    }
};