class Solution {
public:
    
    int smallestNumber(int n, int t) {
        int num=n;
        
        while(true){
          int p= 1;
          while(n){
            p=p*(n%10);
            n/=10;
          }
          n= num;
          if(p%t==0){
            break;
            
          }
            num++;
            n=num;
          
        }
     return num;   
    }
};