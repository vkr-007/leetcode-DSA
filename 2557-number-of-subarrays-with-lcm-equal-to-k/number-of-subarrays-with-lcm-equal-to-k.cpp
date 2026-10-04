class Solution {
public:
    int gcd(int a, int b) {
        while (b) {
            int temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    int lcm(int a, int b) {
        return a / gcd(a, b) * b;
    }

    int subarrayLCM(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int cl = 1;

            for (int j = i; j < n; j++) {
                cl = lcm(cl, nums[j]);

                if (cl == k) {
                    ans++;
                }

                if (cl > k) {
                    break;
                }
            }
        }

        return ans;
    }
};