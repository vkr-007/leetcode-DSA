class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
  
        int n= nums1.size();
        vector<int> d(n);
        for(int i=0;i<n;i++){
           d[i]=(abs(nums1[i]-nums2[i]));

        }
        long long k = (long long) k1+k2;
        int md= *max_element(d.begin(),d.end());
        vector<int> cd(md+1,0);
        for(auto x:d){
            cd[x]++;
        }
        for(int i=md;i>0 && k>0;i--){
           int op = min((long long)cd[i], k);
            cd[i]-=op;
            cd[i-1]+=op;
            k-=op;
        }
      

        long long ans=0;
      for(long long i=0;i<=md;i++){
        ans+=1LL*cd[i]*i*i;
      }
        return ans;
    }
};