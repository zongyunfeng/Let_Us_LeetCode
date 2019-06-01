//
// Created by Yunfeng on 2019-04-23.
//

struct ListNode {
    int val;

    ListNode *next;

    ListNode(int x) : val(x), next(nullptr) {}
};

class AddTwoNumberSolution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *i = l1;
        ListNode *j = l2;
        auto *head = new ListNode(0);
        auto *current = head;
        auto *nextNode = head;
        int carry{0};

        while (i != nullptr || j != nullptr) {
            int x = (i != nullptr) ? i->val : 0;
            int y = (j != nullptr) ? j->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            nextNode = new ListNode(sum % 10);
            current->next = nextNode;
            current = current->next;
            if (i != nullptr) i = i->next;
            if (j != nullptr)j = j->next;
        }

        if (carry > 0) {
            nextNode = new ListNode(carry);
            current->next = nextNode;
        }

        return head->next;
    }
};