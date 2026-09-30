class Solution {
public:
    int percentageLetter(string s, char letter) {
        int sum=0;
        vector<int> f(26,0);
        for(auto x:s){
            f[x-'a']++;
        }
        for(auto x:f ){
            sum+=x;
        }
        int a=f[letter-'a'];
      return (a*100/sum);
    }
};