class Solution {
public:
    string smallestSubsequence(string s) {
        int n= s.size();
        string r;
        vector<bool> taken(26,false);
        vector<int> lastidx(26);
        for(int i=0;i<n;i++){
            lastidx[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            int idx=s[i]-'a';
            if(taken[idx])continue;
            while(r.length()>0 && lastidx[r.back()-'a']>i && s[i]<r.back() ){
                  taken[r.back()-'a']=false;
                  r.pop_back();
            }
            r.push_back(s[i]);
            taken[idx]=true;
        }
      return r;
    }
};