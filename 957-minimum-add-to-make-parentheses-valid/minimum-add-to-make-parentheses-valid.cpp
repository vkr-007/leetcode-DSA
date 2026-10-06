class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int back=0;
        for(auto x:s){
            if(x=='('){
                st.push(x);
            }else{
                if(!st.empty()){
                    st.pop();
                   
                }else{
                    back++;
                }
            }
        }
        //temp
        return back+st.size();
    }
};