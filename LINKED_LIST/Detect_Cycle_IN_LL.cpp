#include<iostream>
#include<map>
using namespace std;
class Node
{   
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(int data,Node* &Head,Node* &Tail)
{
    if(Head == NULL && Tail == NULL)
    {
        Node* newnode = new Node(data);
        Head = newnode;
        Tail = newnode;
    }
    else{
        Node* newnode = new Node(data);
        newnode->next = Head;
        Head = newnode;
    }
}
void traversal(Node *Head)
{
    while(Head != NULL)
    {
        cout<<Head->data<<"->";
        Head = Head->next;
    }
    cout<<"NULL"<<endl;
}
bool hasCycle(Node *head) {
        map<Node*, bool> arr;
        Node* temp = head;

        while(temp != NULL)
        {
            if(arr[temp] == true)
            {
                return true;
            }

            arr[temp] = true;
            temp = temp->next;
        }
        return false;
    }
    bool detectcycle2nd(Node *head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;

                if(slow == fast)
                {
                    return true;
                }
            }
   
        }
        return false;
    }
int main()
{
    Node* Head = NULL;
    Node* Tail = NULL;
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    traversal(Head);
}