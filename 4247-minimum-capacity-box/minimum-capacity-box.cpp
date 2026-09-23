class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans=-1;
        int diff=INT_MAX;

       for(int i=0;i<capacity.size();i++){

        if(capacity[i] >= itemSize){
            int t=capacity[i]-itemSize;
            if(t<diff){
                ans=i;
                diff=t;
            }
        }
       }
       return ans;
    }
};