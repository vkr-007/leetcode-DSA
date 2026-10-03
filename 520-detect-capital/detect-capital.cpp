class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0,s=0;
        for(auto x:word){
            if(isupper(x)){
                c++;
            }else{
                s++;
            }

        }
        int n=word.size();
        //temp
        return (c==n|| s==n||(c==1 && isupper(word[0])));
    }
};