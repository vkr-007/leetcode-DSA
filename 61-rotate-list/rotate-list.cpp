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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
         ListNode* temp=head;
         vector<int>a;
         int n=0;
       while(temp) {
        a.push_back(temp->val);
        temp= temp->next;
        n++;
       }
       k=k%n;
       reverse(a.begin(),a.end());
       reverse(a.begin(),a.begin()+k);
       reverse(a.begin()+k,a.end());



       ListNode* ans= new ListNode(0);
       ListNode* tail= ans;
       for(int i=0;i<a.size();i++){
           tail->next= new ListNode(a[i]);
           tail= tail->next;
       }
       return ans->next;
    }
};