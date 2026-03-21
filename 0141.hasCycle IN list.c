/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next) { //fast非空
        slow = slow->next; 
        fast = fast->next->next; 
        if (fast == slow) { 
            return true;
        }
    }
    return false; // 访问到了链表末尾，无环
}
