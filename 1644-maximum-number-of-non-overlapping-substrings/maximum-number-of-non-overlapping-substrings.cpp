class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
         int n= s.size();
         vector<int> l(26,n),r(26,-1);
         for(int i=0;i<n;i++){
            int c= s[i]-'a';
           l[c]=min(l[c],i);
           r[c]=max(r[c],i);
         }
        vector<pair<int,int>> range;
        for(int c=0;c<26;c++){
            if(l[c]==n) continue;
            int p=l[c];
            int q=r[c];
            bool valid= true;
            for(int i=p;i<=q;i++){
                int x=s[i]-'a';
                if(l[x]<p){
                    valid= false;
                    break;
                }
                q=max(q,r[x]);

            }
            if(valid){
                range.push_back({p,q});

            }
        } 
        sort(range.begin(),range.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });

        vector<string> ans;
        int end=-1;
        for(auto [l,r]:range){
            if(l>end){
                ans.push_back(s.substr(l,r-l+1));
                end=r;
            }
        }
        return ans;
    }
};