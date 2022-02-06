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
    ListNode* insertionSortList(ListNode* head) {
        int i;
        ListNode* r=head;
        vector<int> v;
        
        while(r!=NULL)
        {
            v.push_back(r->val);
            r=r->next;
        }
        sort(v.begin(),v.end());
        ListNode* newnode=new ListNode;
        ListNode* t=newnode;
        for(i=0;i<v.size();i++)
        {
            newnode->next=new ListNode(v[i]);
            newnode=newnode->next;
        }
        return t->next;
    }
};