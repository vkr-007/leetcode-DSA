class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int k=0;
        for(auto x: nums){
            if(x!=0){
                temp.push_back(x);
            }else{
                k++;
            }}
            while(k!=0){
                temp.push_back(0);
                k--;
            }
        nums= temp;

    }
};