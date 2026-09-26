class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
      int notplaced=0;
      int n=fruits.size();
      for(int i=0;i<n;i++){
        bool p=false;
        for(int j=0;j<n;j++){
            if(fruits[i]<=baskets[j]){
                baskets[j]=-1;
                p=true;
                break;
            }

        }
        if(!p){
            notplaced++;
        }


      }
      return notplaced;
    }
};