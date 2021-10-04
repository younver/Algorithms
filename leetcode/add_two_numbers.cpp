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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode head; // just 0 initially
        ListNode* tail = &head; // pointer tail => address of head

        while (carry || l1 || l2) {
            //std::cout << l1->val << " AND " << l2->val << std::endl;

            if (l1) {
                carry += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                carry += l2->val;
                l2 = l2->next;
            }
            tail->next = new ListNode(carry % 10);
            tail = tail->next;
            carry /= 10;
        }
        return head.next;
    }
};
