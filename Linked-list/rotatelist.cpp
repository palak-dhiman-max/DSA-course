class Solution {
public:
    int length(ListNode* head) {
        int count = 0;
        while (head) {
            count++;
            head = head->next;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int len = length(head);
        k = k % len;
        if (k == 0) return head;

        int stepsToNewHead = len - k;
        ListNode* temp = head;
        ListNode* prev = nullptr;

        while (stepsToNewHead--) {
            prev = temp;
            temp = temp->next;
        }

        // Break the list
        prev->next = nullptr;

        // Find the tail of the rotated part
        ListNode* tail = temp;
        while (tail->next) {
            tail = tail->next;
        }

        // Connect tail to original head
        tail->next = head;
         
        return temp;
    }
};
