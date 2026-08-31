/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        //vector approach
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        int i = 1;
        vector<int> p;
        while (temp2 && temp2->next) {
            if (temp->val > temp2->val && temp2->val < temp2->next->val) {
                p.push_back(i);
            }
            if (temp->val < temp2->val && temp2->val > temp2->next->val) {
                p.push_back(i);
            }
            i++;
            temp = temp->next;
            temp2 = temp2->next;
        }
        vector<int> ans = {-1, -1};
         if (p.size() < 2) {
            return  {-1, -1};
        }
        int mn=INT_MAX;
            for (int i = 1; i < p.size(); i++) {
                mn = min(mn, p[i] - p[i - 1]);
            }
        
        return {mn,p.back() - p.front()};
    }
};