class Solution {
public:
    int hIndex(vector<int>& c) {
        int lo = 0;
        int n=c.size();
        int hi = n-1;
        while (lo <= hi) {
            int mid = (hi - lo) / 2 + lo;
            if (c[mid] >= n-mid) {
                 hi=mid-1;
            }else{
                lo= mid+1;
            }
        
        }
            return n-lo;
    }


    
};