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
        if (!head || !head->next || k == 0) {
            return head;
        }
        ListNode* tail = head;
        int len = 1;
        while (tail->next) {
            tail = tail->next;
            len++;
        }
        int c = 1;
        ListNode* curr = head;
        k = k % len;
        if (k == 0) {
            return head;
        }
        while (c < len - k) {
            curr = curr->next;
            c++;
        }
        tail->next = head;
        head = curr->next;
        curr->next = nullptr;
        return head;
    }
};
