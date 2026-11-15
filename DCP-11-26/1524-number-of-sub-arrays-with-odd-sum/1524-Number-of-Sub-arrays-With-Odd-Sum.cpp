
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int even = 1, odd = 0;
        int sum = 0, ans = 0;
        int mod = 1e9 + 7;

        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if(sum % 2 == 0) {
                ans += odd;
                even++;
            }
            else {
                ans += even;
                odd++;
            }

            ans %= mod;
        }

        return ans;
    }
};
