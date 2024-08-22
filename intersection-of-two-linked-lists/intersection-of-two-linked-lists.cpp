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
    int length(ListNode* head) {
        int len = 0;
        while (head) {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (!headA || !headB)
            return NULL;
        int lenA = length(headA), lenB = length(headB);

        if (lenA > lenB) {
            while (lenA > lenB) {
                headA = headA->next;
                lenA--;
            }
        } else if (lenA < lenB) {
            while (lenA < lenB) {
                headB = headB->next;
                lenB--;
            }
        }

        while (headA && headB) {
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
