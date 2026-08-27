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
    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* temp=head;
       vector<int>a;

       while(temp) {
        a.push_back(temp->val);
        temp= temp->next;
       }
        for (int i = 0; i + k <= a.size(); i += k) {
            reverse(a.begin() + i, a.begin() + i + k);
        }



       ListNode* ans= new ListNode(0);
       ListNode* tail= ans;
       for(int i=0;i<a.size();i++){
           tail->next= new ListNode(a[i]);
           tail= tail->next;
       }
       return ans->next;;
    }
};