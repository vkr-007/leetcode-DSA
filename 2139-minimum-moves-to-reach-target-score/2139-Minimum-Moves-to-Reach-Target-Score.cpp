class Solution {
public:
    int minMoves(int target, int maxDoubles) {
     int op=0;
     while(maxDoubles>0 && 1<target){
         if(target%2==0){
            target/=2;
            maxDoubles--;
         }else{
            target--;
         }
         op++;
     }
     return op+target-1;
    }
};