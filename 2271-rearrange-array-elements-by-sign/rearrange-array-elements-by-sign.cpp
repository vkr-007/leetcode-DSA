class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp1;
        vector<int> temp2;
        for(auto x: nums){
            if(x>=0){
                temp1.push_back(x);
            }else{
                temp2.push_back(x);
            }
        }
        vector<int> ans;
        for(int i=0;i<nums.size()/2;i++){
          ans.push_back(temp1[i]);
          ans.push_back(temp2[i]);
        }
       nums=ans;
    return ans; 
    }
    
};