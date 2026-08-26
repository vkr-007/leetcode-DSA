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
    ListNode* sortList(ListNode* head) {
        ListNode* a= new ListNode(0);
        ListNode* temp= head;
        vector<int> ans;
        while(temp){
           ans.push_back(temp->val);
           temp= temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* tail= a;
        for(auto x: ans){
          tail->next= new ListNode(x);
          tail=tail->next;
        }
        return a->next;

    }
};