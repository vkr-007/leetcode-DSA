class Solution {
public:
    int maxProfit(vector<int>& p) {
        int minprice=p[0];
        int profit=0;

        for(auto x: p){
            minprice= min(minprice,x);
            profit= max(profit, x-minprice);
        }
        return profit;
    }
};