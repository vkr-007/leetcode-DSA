class Solution {
public:
      bool sym(int x) {
        string s = to_string(x);
        bool even = (s.size() % 2 == 0);
       
       int i=0;
       int j= s.size()-1;
       int a=0;
       while(i<j){
        a+=s[i]-'0';
        a-=s[j]-'0';
        i++;
        j--;
       }
       return (even && a==0);

    }
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        while(low<=high){
            if(sym(low)){
                c++;
            }
            low++;
        }
        return c;

    }
};