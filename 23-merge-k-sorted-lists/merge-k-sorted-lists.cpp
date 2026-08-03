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
        if(lists.empty()) return nullptr;
        
        while(lists.size()>1){
            vector<ListNode*> temp;
            for(int i=0;i<lists.size();i+=2)
            {
                ListNode*l1=lists[i];
                ListNode*l2=(i+1<lists.size()?lists[i+1]:nullptr);
              temp.push_back(merge(l1,l2));
            }
            lists=temp;

        }
        return lists[0];
    }

};
