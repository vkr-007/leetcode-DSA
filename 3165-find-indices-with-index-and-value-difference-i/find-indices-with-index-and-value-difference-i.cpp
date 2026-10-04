class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+id;j<n;j++){
                if(abs(nums[j]-nums[i])>=vd){
                    return {i,j};
                }
            }

        }
        return {-1,-1};
    }
};