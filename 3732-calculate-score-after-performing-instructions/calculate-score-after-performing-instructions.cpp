class Solution {
public:
    long long calculateScore(vector<string>& in, vector<int>& v) {
        int n = in.size();
        vector<bool> flag(n, false);
        long long score = 0;
        int i = 0;
        while (i>=0 && i < n) {
            if (flag[i]) {
                break;
            }
            flag[i] = true;
            if (in[i] == "jump") {
                i = i + v[i];
            }
          else  if (in[i] == "add") {
                score += v[i];
                i++;
            }
        }
        return score;
    }
};