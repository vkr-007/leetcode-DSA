class Solution {
public:
    struct comp{
        bool operator()(string a, string b){
            if(a.size()!=b.size()){
                return a.size()<b.size();

            }
            return a<b;
        }
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,comp> pq;
        for(auto x: nums){
            pq.push(x);
            

        }while(k>1){
                pq.pop();
                k--;
            }
        return pq.top();
    }
};