class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> ap(nums.size()+1,false);
        for(auto x: nums){
            if(ap[x]==true){
                continue;
            }
            ap[x]= true;
        }
        vector <int>ans;
        for(int i=1;i<nums.size()+1;i++){
            if(ap[i]== false){
                ans.push_back(i);
            }

        }
        return ans;
    }
};