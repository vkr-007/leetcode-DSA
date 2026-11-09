class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        set<int> st;
        vector<int> count(k, 0);

        for(int i = 0; i < k; i++)
            st.insert(i);

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(int i = 0; i < arrival.size(); i++) {

            while(!pq.empty() && pq.top().first <= arrival[i]) {
                st.insert(pq.top().second);
                pq.pop();
            }

            if(st.empty())
                continue;

            int idx = i % k;

            auto it = st.lower_bound(idx);

            if(it == st.end())
                it = st.begin();

            int server = *it;

            st.erase(it);

            count[server]++;

            pq.push({arrival[i] + load[i], server});
        }

        int mx = *max_element(count.begin(), count.end());

        vector<int> ans;

        for(int i = 0; i < k; i++) {
            if(count[i] == mx)
                ans.push_back(i);
        }

        return ans;
    }
};