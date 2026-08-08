class Solution {
public:
    void sortColors(vector<int>& v) {
      for (int i = 0; i < v.size() - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                flag = true;
                swap(v[j], v[j + 1]);
            }
        }
        if (!flag)
            break;
    }}
};