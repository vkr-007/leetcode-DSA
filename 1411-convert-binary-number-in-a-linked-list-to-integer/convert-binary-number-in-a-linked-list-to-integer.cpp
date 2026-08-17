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
    int getDecimalValue(ListNode* head) {
        int ans=0;
        int power=1;
        ListNode* prev = nullptr;
        ListNode* curr= head;
        while(curr ){
            ListNode* temp= curr->next;
             curr->next= prev;
            prev= curr;
            curr= temp;
        }
        while(prev){
         ans+= prev->val*power;
         prev= prev->next;
         power*=2;

        }
        return ans;
    }
};