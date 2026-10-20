class Solution {
public:
    int countPoints(string rings) {
        int a[10][3] = {};
        int n = rings.size();
        for (int i = 0; i < n; i += 2) {
            int t = rings[i+1] - '0';
            if (rings[i] == 'R')
                a[t][0] = 1;
            else if (rings[i] == 'G')
                a[t][1] = 1;
            else
                a[t][2] = 1;
        }
        int ans=0;
        for(int i=0;i<10;i++){
            if(a[i][0] && a[i][1] && a[i][2]){
                ans++;
            }
        }
        return ans;
    }
};