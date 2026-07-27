#include <iostream>
#include <map>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode* next;

    ListNode(int x)
    {
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

class Solution
{
public:

    //================== Method 1 : Floyd's Algorithm ==================

    ListNode* getCycleStart(ListNode* head, ListNode* meetingPoint)
    {
        ListNode* ptr1 = head;
        ListNode* ptr2 = meetingPoint;

        while(ptr1 != ptr2)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        return ptr1;
    }

    ListNode* detectCycleFloyd(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                return getCycleStart(head, slow);
            }
        }

        return NULL;
    }

    //================== Method 2 : Using Map ==================

    ListNode* detectCycleMap(ListNode* head)
    {
        map<ListNode*, bool> visited;

        ListNode* temp = head;

        while(temp != NULL)
        {
            if(visited[temp] == true)
            {
                return temp;
            }

            visited[temp] = true;
            temp = temp->next;
        }

        return NULL;
    }
};

int main()
{
    ListNode* head = NULL;
    ListNode* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    // Creating a cycle:
    // 50 -> 30
    ListNode* temp = head;
    while(temp->val != 30)
    {
        temp = temp->next;
    }

    tail->next = temp;

    Solution obj;

    //--------------- Floyd Method ----------------

    ListNode* ans1 = obj.detectCycleFloyd(head);

    if(ans1 != NULL)
        cout << "Floyd Method: Cycle starts at node = " << ans1->val << endl;
    else
        cout << "Floyd Method: No Cycle" << endl;

    //--------------- Map Method ------------------

    ListNode* ans2 = obj.detectCycleMap(head);

    if(ans2 != NULL)
        cout << "Map Method: Cycle starts at node = " << ans2->val << endl;
    else
        cout << "Map Method: No Cycle" << endl;

    return 0;
}