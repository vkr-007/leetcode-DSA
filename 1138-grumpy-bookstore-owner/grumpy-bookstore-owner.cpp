class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int k) {
        //already satisfied
        int st=0;
        for(int i=0;i<grumpy.size();i++ ){
            if(grumpy[i]==0){
                st+=customers[i];
            }
        }
        int t1=0;
        for(int i=0;i<k;i++){
              if(grumpy[i] == 1) {
                t1 += customers[i];
            }
        }
        int t2=t1;
        for(int i=k;i<grumpy.size();i++){
         
            if(grumpy[i] == 1)
                t1 += customers[i];

            if(grumpy[i-k] == 1)
                t1 -= customers[i-k];

            t2 = max(t2, t1);
        }

        return st+t2;
    }
};