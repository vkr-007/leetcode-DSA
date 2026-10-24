class Solution {
public:
    bool isItPossible(string word1, string word2) {
        int a[26]={0},b[26]={0};
        for(auto x:word1){
            a[x-'a']++;

        }
        for(auto x:word2){
            b[x-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                 if(a[i]==0 || b[j]==0) continue;
                a[i]--;
                a[j]++;
                b[j]--;
                b[i]++;
               
                int x=0,y=0;

                for(int k=0;k<26;k++){
                    if(a[k]>0)x++;
                    if(b[k]>0)y++;

                }
                if(x==y)return true;
                a[i]++;
                a[j]--;
                b[i]--;
                b[j]++;
            }

        }
        return false;

    }
};