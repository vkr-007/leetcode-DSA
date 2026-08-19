class Solution {
public:
    int shipWithinDays(vector<int>& v, int days) {
       int hi=accumulate(v.begin(),v.end(),0);
        int lo= *max_element(v.begin(),v.end());
        while(lo<hi){
            int mid= lo+(hi-lo)/2;
            long long d=1;
            int x=0;
            for(auto a: v){
                if(x+a<=mid){
                    x+=a;
                }else{
                    d++;
                    x=a;
                }
            }
            if(d>days){
                lo= mid+1;
            }else{
                hi= mid;
            }

        }
    return lo;
    }
    
};