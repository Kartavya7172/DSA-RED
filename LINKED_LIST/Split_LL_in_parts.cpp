#include <iostream>
#include <vector>
using namespace std;

// Definition of ListNode
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Insert at Tail
void insertAtTail(ListNode* &head, ListNode* &tail, int data)
{
    ListNode* newNode = new ListNode(data);

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
    while(head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

class Solution
{
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k)
    {
        int N = 0;
        ListNode* temp = head;

        // Count total nodes
        while(temp != NULL)
        {
            N++;
            temp = temp->next;
        }

        int idealPartSize = N / k;
        int extraNodes = N % k;

        vector<ListNode*> ans(k, NULL);

        temp = head;

        for(int i = 0; i < k && temp != NULL; i++)
        {
            ans[i] = temp;

            int actualPartSize = idealPartSize + (extraNodes-- > 0 ? 1 : 0);

            for(int j = 0; j < actualPartSize - 1; j++)
            {
                temp = temp->next;
            }

            ListNode* forward = temp->next;
            temp->next = NULL;
            temp = forward;
        }

        return ans;
    }
};

int main()
{
    ListNode* head = NULL;
    ListNode* tail = NULL;

    // Create Linked List
    for(int i = 1; i <= 10; i++)
    {
        insertAtTail(head, tail, i);
    }

    cout << "Original Linked List:\n";
    printList(head);

    int k = 3;

    Solution obj;
    vector<ListNode*> parts = obj.splitListToParts(head, k);

    cout << "\nSplit Parts:\n";

    for(int i = 0; i < k; i++)
    {
        cout << "Part " << i + 1 << ": ";

        if(parts[i] == NULL)
        {
            cout << "NULL";
        }
        else
        {
            printList(parts[i]);
            continue;
        }

        cout << endl;
    }

    return 0;
}