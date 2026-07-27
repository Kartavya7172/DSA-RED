#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int x) {
        val = x;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

class Solution {
public:

    // Returns the tail of the flattened list
    Node* solve(Node* head) {
        if (head == NULL)
            return NULL;

        Node* it = head;
        Node* tail = head;

        while (it != NULL) {

            if (it->child) {

                // Flatten child list
                Node* childTail = solve(it->child);

                // Store original next
                Node* temp = it->next;

                // Attach child after current node
                it->next = it->child;
                it->child->prev = it;

                // Attach original next after child list
                childTail->next = temp;

                if (temp)
                    temp->prev = childTail;

                // Remove child pointer
                it->child = NULL;
            }

            tail = it;
            it = it->next;
        }

        return tail;
    }

    Node* flatten(Node* head) {
        solve(head);
        return head;
    }
};

// Print flattened list
void printList(Node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    /*
            1 - 2 - 3 - 4 - 5
                    |
                    6 - 7
                        |
                        8 - 9

        Flattened:
        1 2 3 6 7 8 9 4 5
    */

    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);

    // First level
    n1->next = n2;
    n2->prev = n1;

    n2->next = n3;
    n3->prev = n2;

    n3->next = n4;
    n4->prev = n3;

    n4->next = n5;
    n5->prev = n4;

    // Child list
    Node* n6 = new Node(6);
    Node* n7 = new Node(7);

    n6->next = n7;
    n7->prev = n6;

    n3->child = n6;

    // Child of child
    Node* n8 = new Node(8);
    Node* n9 = new Node(9);

    n8->next = n9;
    n9->prev = n8;

    n7->child = n8;

    Solution obj;

    Node* head = obj.flatten(n1);

    cout << "Flattened List: ";
    printList(head);

    return 0;
}