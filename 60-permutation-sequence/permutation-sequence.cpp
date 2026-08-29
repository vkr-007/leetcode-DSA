class Solution {
public:
    string getPermutation(int n, int k) {
      vector<int> v;
      for(int i=1;i<n+1;i++){
        v.push_back(i);
      }
      int fact=1;
      for(int i=1;i<n;i++){
        fact*=i;
      }
      k--;
      string ans="";
      while(!v.empty()){
        int idx= k/fact;
        ans+=to_string(v[idx]);
        v.erase(v.begin()+idx);
        k=k%fact;
        if(v.size()>0){
            fact/=v.size();
        }

      }
      return ans;
    }
};