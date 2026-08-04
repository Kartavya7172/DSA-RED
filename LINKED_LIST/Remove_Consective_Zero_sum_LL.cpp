#include <iostream>
#include <unordered_map>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode() {
        val = 0;
        next = NULL;
    }

    ListNode(int x) {
        val = x;
        next = NULL;
    }

    ListNode(int x, ListNode *next) {
        val = x;
        this->next = next;
    }
};

class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {

        // Create dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        unordered_map<int, ListNode*> mp;

        int prefixSum = 0;

        // First pass: Store the last node for every prefix sum
        ListNode* temp = dummy;
        while (temp != NULL) {
            prefixSum += temp->val;
            mp[prefixSum] = temp;
            temp = temp->next;
        }

        // Second pass: Remove zero-sum sublists
        prefixSum = 0;
        temp = dummy;

        while (temp != NULL) {
            prefixSum += temp->val;
            temp->next = mp[prefixSum]->next;
            temp = temp->next;
        }

        return dummy->next;
    }
};

// Function to insert at tail
void insertAtTail(ListNode* &head, ListNode* &tail, int val) {
    ListNode* newNode = new ListNode(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Function to print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    ListNode* head = NULL;
    ListNode* tail = NULL;

    // Input: 1 -> 2 -> -3 -> 3 -> 1
    insertAtTail(head, tail, 1);
    insertAtTail(head, tail, 2);
    insertAtTail(head, tail, -3);
    insertAtTail(head, tail, 3);
    insertAtTail(head, tail, 1);

    cout << "Original List:\n";
    printList(head);

    Solution obj;
    head = obj.removeZeroSumSublists(head);

    cout << "After Removing Zero Sum Sublists:\n";
    printList(head);

    return 0;
}