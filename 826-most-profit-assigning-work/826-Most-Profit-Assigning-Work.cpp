class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> job;
        int n=profit.size();
        for(int i=0;i<n;i++){
            job.push_back({difficulty[i],profit[i]});
        }
        sort(job.begin(), job.end());
        sort(worker.begin(), worker.end());
        int j=0;
        int p=0,ans=0;
        for(auto x:worker){
            while(j<n && job[j].first<=x){
                p=max(p,job[j].second);
                j++;
            }
            ans+=p;
        }
        return ans;
    }
};