#include <iostream>
using namespace std;

// Definition for singly-linked list
class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Function to insert at the end
void insertAtTail(ListNode* &head, int val) {
    ListNode* newNode = new ListNode(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        // Base case
        if (head == NULL)
            return NULL;

        // Step 1: Check if at least k nodes are available
        int count = 0;
        ListNode* temp = head;

        while (temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }

        // Step 2: Reverse first k nodes
        if (count == k) {

            ListNode* prev = NULL;
            ListNode* cur = head;
            ListNode* forward = NULL;

            int i = 0;
            while (i < k) {
                forward = cur->next;
                cur->next = prev;
                prev = cur;
                cur = forward;
                i++;
            }

            // Step 3: Reverse remaining list recursively
            ListNode* recHead = reverseKGroup(forward, k);

            // Step 4: Connect the lists
            head->next = recHead;

            // Step 5: Return new head
            return prev;
        }

        return head;
    }
};

int main() {

    ListNode* head = NULL;

    // Create list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    insertAtTail(head, 7);
    insertAtTail(head, 8);

    cout << "Original Linked List: ";
    printList(head);

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    Solution obj;
    head = obj.reverseKGroup(head, k);

    cout << "Linked List after reversing in groups of " << k << ": ";
    printList(head);

    return 0;
}