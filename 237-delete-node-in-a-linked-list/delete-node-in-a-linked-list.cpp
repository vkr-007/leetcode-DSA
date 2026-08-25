class Solution {
public:
//0{1}
    void deleteNode(ListNode* toBeDeleted) {
        toBeDeleted->val = toBeDeleted->next->val;
        toBeDeleted->next = toBeDeleted->next->next;
    }
};