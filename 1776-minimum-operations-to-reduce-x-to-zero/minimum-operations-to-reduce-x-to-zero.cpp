class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int t=0;
       for(auto x:nums){
          t+=x;
       }
       int j=0;
       int temp=0;
       int temp2=INT_MIN;
       if(t<x) return -1;
       if(t==x)return nums.size();
       for(int i=0;i<nums.size();i++){
           temp+=nums[i];
           while(temp>t-x){
            temp-=nums[j];
            j++;
           }
          if(temp==t-x){
             temp2=max(temp2,i-j+1);
          }

       }
        return (temp2==INT_MIN)?-1:nums.size()-temp2;
    }
};