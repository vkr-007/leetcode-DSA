class Solution {
public:
    string smallestSubsequence(string s) {
        int n= s.size();
        stack<char> st;
        vector<bool> taken(26,false);
        vector<int> lastidx(26);
        for(int i=0;i<n;i++){
            lastidx[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            int idx=s[i]-'a';
            if(taken[idx])continue;
            while(!st.empty() && lastidx[st.top()-'a']>i && s[i]<st.top() ){
                  taken[st.top()-'a']=false;
                  st.pop();
            }
            st.push(s[i]);
            taken[idx]=true;
        }
        string r;
        while(!st.empty()){
            r.push_back(st.top());
            st.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};