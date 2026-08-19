class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> st;
        for(auto x:password){
            st.insert(x);
        }
        int a=0;
        for(auto x: st){
            if(isupper(x)){
                a+=2;
            }
            else if(x=='!'||x=='@'||x=='#'||x=='$'){
                a+=5;
            }else if(islower(x)){
                a++;
            }
            else{
                if(isdigit(x)){
                    a+=3;
                }
            }
        }
        return a;
    }
};;