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
    pair<ListNode*, ListNode*> reverse(ListNode* &start, ListNode* &end){
        ListNode* prev=NULL;
        ListNode* reversedEnd=start;
        ListNode* curr=start;
        end->next=NULL;
        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
         pair<ListNode*, ListNode*> reversedlist ={prev,reversedEnd};

        return reversedlist;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* check=head;
        ListNode*prevleft;
        ListNode*rightNode;
            int i=1;
        while(check!=NULL){
            if(i==left-1)prevleft=check;
            if(i==right) rightNode=check;
            check=check->next;
            i++;
        }
        pair<ListNode*, ListNode*> reversedlist ;
        ListNode* rightnext=rightNode->next;

        if(left==1){
            reversedlist=reverse(head,rightNode);
        ListNode* reversedStart=reversedlist.first;
        ListNode* reversedEnd= reversedlist.second;
        head =reversedStart;
        reversedEnd->next=rightnext;

        }
        else  
        {reversedlist=reverse(prevleft->next,rightNode);
        ListNode* reversedStart=reversedlist.first;
        ListNode* reversedEnd= reversedlist.second;
        prevleft->next=reversedStart;
        reversedEnd->next=rightnext;
    }
        return head;
    }

};