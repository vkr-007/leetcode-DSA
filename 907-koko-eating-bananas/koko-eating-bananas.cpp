class Solution {
public:
    int minEatingSpeed(vector<int>& v, int h) {
        int lo= 1;
        int hi= *max_element(v.begin(),v.end());
        while(lo<hi){
            int mid= lo+(hi-lo)/2;
            long long hours=0;
            for(auto x: v){
                hours+= ceil((double)x/mid);

            }
            if(hours<=h){
                hi=mid;
            }else{
                lo= mid+1;
            }
        }
        return lo;
    }
};