class Solution {
public:
    void sortColors(vector<int>& nums) {
     int a=0;
     int b=0;
     int c=0;
     for(auto x : nums){
        if(x==0) a++;
        else  if(x==1) b++;
        else c++;
     }
        int i=0;
         while(i<a){
            nums[i]=0;
            i++;
         }
         while(i<a+b){
            nums[i]=1;
            i++;
         }
         while(i<nums.size()){
            nums[i]=2;
            i++;
         }
     }
};