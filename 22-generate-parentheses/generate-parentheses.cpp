class Solution {
public:
    vector<string> ans;
    void solve(string s,int start,int end,int n){

        if(s.size()==2*n){
           ans.push_back(s);
           return;
        }
        if(start<n){
            solve(s+'(',start+1,end,n);
        }
        if(end<start){
            solve(s+')',start,end+1,n);

        }

    }
    vector<string> generateParenthesis(int n) {
      solve("",0,0,n);
      return ans;
        
    }
};