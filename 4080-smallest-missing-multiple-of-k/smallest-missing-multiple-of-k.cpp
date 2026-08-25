class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int tem=k;
        int b= *max_element(nums.begin(),nums.end());
        for(int i=0;i<b;i+=tem){
            if(find(nums.begin(),nums.end(),k)==nums.end()){
                  return k;
            }
            k+=tem;
        }
        return k;
    }
    
};