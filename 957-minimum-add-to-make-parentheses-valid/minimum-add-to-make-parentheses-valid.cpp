class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int back=0;
        int t=0;
        for(auto x:s){
            if(x=='('){
                st.push(x);
                t++;
            }else{
                if(!st.empty()){
                    st.pop();
                   
                }else{
                    back++;
                }
            }
        }

        return back+st.size();
    }
};