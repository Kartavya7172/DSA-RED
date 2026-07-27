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
Node* reverse(Node* Head)
    {
        Node* prev = NULL;
        Node* curr = Head;
        Node* forward = NULL;
        
        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
Node* addOne(Node* head) {
        // code here
        head = reverse(head);

        int carry = 1;
        Node* temp = head;
        while(temp != NULL)
        {
            int sum = temp->data+carry;
            int digit = sum%10;
            carry = sum/10;
            
            temp->data = digit;
            
            if(temp->next == NULL && carry != 0)
            {
                Node* newnode = new Node(carry);
                temp->next = newnode;
                temp = newnode;
            }
            
            temp = temp->next;
        }
       head = reverse(head);
       return head;
        
    }
int main()
{
    Node* Head = NULL;
    Node* Tail = NULL;
    insertAtHead(9,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    addOne(Head);
    traversal(Head);
}