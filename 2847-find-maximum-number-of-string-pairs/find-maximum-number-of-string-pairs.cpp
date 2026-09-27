class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& s) {
        int n= s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                 string temp = s[j];
                reverse(temp.begin(), temp.end()); 
                if(s[i]==temp){
                    ans++;
                }
            }
        }
        return ans;
    }
};