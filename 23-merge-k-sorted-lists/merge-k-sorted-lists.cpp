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
     ListNode*  merge(ListNode*  l1,ListNode* l2){
        if(l1==nullptr && l2== nullptr) return nullptr;
        if(l1==nullptr)return l2;
        if(l2==nullptr) return l1;
        ListNode* dummy= new ListNode(0);
        ListNode* t=dummy;
        while(l1!=nullptr&& l2!=nullptr){
        if(l1->val<l2->val){
            t->next= l1;
            l1=l1->next;
        }else{
            t->next=l2;
            l2=l2->next;
        }
        t=t->next;}
        if(l2!=nullptr){
            t->next= l2;
        }else{
            t->next= l1;
        }
        return dummy->next;
     }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k= lists.size();
        int i=0;
        ListNode* dummy= nullptr;
        while(i<k){
           dummy=  merge(dummy,lists[i]);
            i++;

        }
        return dummy;
    }
};
