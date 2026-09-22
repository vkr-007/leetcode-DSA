struct node {
    int count[5] = {0};
    int prod = 1;
};
class segmenttree {
public:
    int n;
    int k;
    vector<node> segtree;
    segmenttree(vector<int>& nums, int k) {
        this->k = k;
        n = nums.size();
        segtree.assign(4 * n, node());
        build(0, 0, n - 1, nums);
    }
    void build(int i, int l, int r, vector<int>& nums) {
        if (l == r) {
            leafnode(i, nums[l]);
            return;
        }
        int mid = l + (r - l) / 2;
        build(2 * i + 1, l, mid, nums);
        build(2 * i + 2, mid + 1, r, nums);
        segtree[i] = merge(segtree[2 * i + 1], segtree[2 * i + 2]);
    }
    void leafnode(int i, int val) {
        for (int x = 0; x < k; x++) {
            segtree[i].count[x] = 0;
        }
        int r = val % k;
        segtree[i].count[r] = 1;
        segtree[i].prod = r;
    }
    node merge(node& left, node& right) {
        node result;
        result.prod = (left.prod * right.prod) % k;
        for (int x = 0; x < k; x++) {
            result.count[x] = left.count[x];
        }
        for (int x = 0; x < k; x++) {
            int new_r = (left.prod * x) % k;
            result.count[new_r] += right.count[x];
        }
        return result;
    }
    void segtree_update(int i, int l, int r, int idx, int val) {
        if (l == r) {
            leafnode(i, val);
            return;
        }
        int mid = l + (r - l) / 2;
        if (idx <= mid) {
            segtree_update(2 * i + 1, l, mid, idx, val);
        } else {
            segtree_update(2 * i + 2, mid + 1, r, idx, val);
        }
        segtree[i] = merge(segtree[2 * i + 1], segtree[2 * i + 2]);
    }
    void update(int idx, int val) { segtree_update(0, 0, n - 1, idx, val); }
    node segtree_querry(int s, int e, int i, int l, int r) {
        if (l >= s && r <= e) {
            return segtree[i];
        }
        int mid = l + (r - l) / 2;
        if (e <= mid) {
            return segtree_querry(s, e, 2 * i + 1, l, mid);
        }
        if (s > mid) {
            return segtree_querry(s, e, 2 * i + 2, mid + 1, r);
        }
        node left = segtree_querry(s, e, 2 * i + 1, l, mid);

        node right = segtree_querry(s, e, 2 * i + 2, mid + 1, r);
        return merge(left, right);
    }
    node querry(int s, int e) { return segtree_querry(s, e, 0, 0, n - 1); }
};

class Solution {
public:
    vector<int> resultArray(vector<int>& nums, int k,
                            vector<vector<int>>& queries) {
        int n = nums.size();
        segmenttree s(nums, k);
        vector<int> result;
        for (auto& q : queries) {
            int idx = q[0];
            int val = q[1];
            int start = q[2];
            int x = q[3];
            s.update(idx, val);
            node no = s.querry(start, n - 1);
            result.push_back(no.count[x]);
        }
        return result;
    }
};