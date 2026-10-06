class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }else if(s[i]==')'){
                  if(!st.empty()){st.pop();}
                  else{
                    s[i]='#';
                  }
            }
        }
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        string ans="";
        for(auto x:s){
            if(x!='#'){
                ans+=x;
            }
        }
        return ans;
    }
};