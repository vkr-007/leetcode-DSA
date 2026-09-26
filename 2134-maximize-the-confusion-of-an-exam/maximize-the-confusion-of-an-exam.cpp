class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        int c = 0, t = 0, f = 0;
        int ans = 0;
        int left=0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 'T') {
                t++;
            }else{
                f++;
            }
            while(t>k && f>k){
                if(a[left]=='T'){
                    t--;
                }else{
                    f--;
                }
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};