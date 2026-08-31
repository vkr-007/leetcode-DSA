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
        //optimal complexity
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        int i = 1;
        int l=-1;
        int first=-1;
        int mind=INT_MAX;
        while (temp2 && temp2->next) {
            if ((temp->val > temp2->val && temp2->val < temp2->next->val)||
              ( temp->val < temp2->val && temp2->val > temp2->next->val)) 
            {
                if(first==-1){
                    first=i;
                }else{
                    mind=min(mind,i-l);
                }
                l=i;
            }
            i++;
            temp = temp2;
            temp2 = temp2->next;
        }
        if(first==l){
          return {-1,-1};
        }
        return {mind,l-first};
    }
};