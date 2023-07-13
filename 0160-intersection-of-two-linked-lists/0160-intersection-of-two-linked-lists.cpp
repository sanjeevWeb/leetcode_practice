/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        
        ListNode *p1= headA, *p2= headB;
        while(p1 && p2 && p1!=p2){ //this contains if they are intersect in first node
            p1= p1->next;
            p2= p2->next;
            if(p1 == p2) return p1;
            
            if(!p1) p1= headA;
            if(!p2) p2= headB;
        }
        return p1;
    }
};