class Solution {
public:
    int minTimeToType(string word) {
        char temp='a';
        int ans=0;
        for(auto x:word){
            int d= abs(x-temp);
            ans+= min(d,26-d);
            ans++;
            temp=x;
        }
        return ans;
    }
};