#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Insert at Tail
void insertAtTail(ListNode* &head, ListNode* &tail, int val)
{
    ListNode* newNode = new ListNode(val);

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Print Linked List
void printList(ListNode* head)
{
    while(head)
    {
        cout << head->val;
        if(head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

class Solution {
public:

    //---------------- Recursive ----------------//

    ListNode* recursive(ListNode* l1, ListNode* l2, int carry = 0)
    {
        if(l1 == NULL && l2 == NULL && carry == 0)
            return NULL;

        int x = (l1) ? l1->val : 0;
        int y = (l2) ? l2->val : 0;

        int sum = x + y + carry;

        int digit = sum % 10;
        carry = sum / 10;

        ListNode* newNode = new ListNode(digit);

        newNode->next = recursive(
            l1 ? l1->next : NULL,
            l2 ? l2->next : NULL,
            carry
        );

        return newNode;
    }

    ListNode* addTwoNumbersRecursive(ListNode* l1, ListNode* l2)
    {
        return recursive(l1, l2, 0);
    }

    //---------------- Iterative ----------------//

    ListNode* addTwoNumbersIterative(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        int carry = 0;

        while(l1 || l2 || carry)
        {
            int x = (l1) ? l1->val : 0;
            int y = (l2) ? l2->val : 0;

            int sum = x + y + carry;

            carry = sum / 10;

            tail->next = new ListNode(sum % 10);
            tail = tail->next;

            if(l1)
                l1 = l1->next;

            if(l2)
                l2 = l2->next;
        }

        return dummy->next;
    }
};

int main()
{
    ListNode* l1 = NULL;
    ListNode* tail1 = NULL;

    ListNode* l2 = NULL;
    ListNode* tail2 = NULL;

    // Number 342
    insertAtTail(l1, tail1, 2);
    insertAtTail(l1, tail1, 4);
    insertAtTail(l1, tail1, 3);

    // Number 465
    insertAtTail(l2, tail2, 5);
    insertAtTail(l2, tail2, 6);
    insertAtTail(l2, tail2, 4);

    cout << "List 1 : ";
    printList(l1);

    cout << "List 2 : ";
    printList(l2);

    Solution obj;

    cout << "\nIterative Answer:\n";
    ListNode* ans1 = obj.addTwoNumbersIterative(l1, l2);
    printList(ans1);

    cout << "\nRecursive Answer:\n";
    ListNode* ans2 = obj.addTwoNumbersRecursive(l1, l2);
    printList(ans2);

    return 0;
}