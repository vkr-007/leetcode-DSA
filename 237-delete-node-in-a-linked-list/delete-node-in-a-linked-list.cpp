class Solution {
public:
    void deleteNode(ListNode* toBeDeleted) {
        toBeDeleted->val = toBeDeleted->next->val;
        toBeDeleted->next = toBeDeleted->next->next;
    }
};