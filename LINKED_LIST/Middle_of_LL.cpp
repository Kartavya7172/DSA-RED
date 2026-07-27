#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertAthead(int val,Node* &Head,Node* &Tail)
{
    if(Head == NULL && Tail == NULL)
    {
        Node *newnode = new Node(val);
        Head = newnode;
        Tail = newnode;
    }
    else{
        Node *newnode = new Node(val);
        newnode->next = Head;
        Head = newnode;

    }
}
void insertAtTail(int val,Node* Head,Node* &Tail)
{
    if(Head == NULL && Tail == NULL)
    {
        Node *newnode = new Node(val);
        Head = newnode;
        Tail = newnode;
    }
    else{
        Node *newnode = new Node(val);
        Tail->next = newnode;
        Tail = newnode;
    }
}
void Travel(Node* Head)
{
    while(Head != NULL)
    {
        cout<<Head->data<<"->";
        Head = Head->next;
    }
    cout<<"NULL"<<endl;
}
void search(int target,Node* Head)
{
    while(Head != NULL)
    {
        if(Head->data == target)
        {
            cout<<"The target is present in the linkedList"<<endl;
            return;
        }
        Head = Head->next;
    }
    cout<<"The target is not present in the linked list"<<endl;
}

int length(Node* Head)
{
    int count =0;
    while(Head != NULL)
    {
        count++;
        Head = Head->next;
    }
   
    return count;
}
void insertAtpos(int val,int pos,Node* &Head,Node* &Tail)
{
    int len = length(Head);
    if (pos < 1 || pos > len + 1)
    {
    cout << "Invalid position\n";
    return;
    }
    else if(pos == 1)
    {
        insertAthead(val,Head,Tail);
    }
    else if(pos == length(Head)+1)
    {
        insertAtTail(val,Head,Tail);
        cout<<"Hi";
    }
    else{

        int insertpoint =0;
        Node*Temp = Head;
        while(insertpoint != pos-2)
        {
            Temp = Temp->next;
            insertpoint++;
        }
        Node *newnode = new Node(val);
        newnode->next=Temp->next;
        Temp->next = newnode;
       
    }
}
void deleteAtpos(int pos,Node* &Head,Node* &Tail)
{
    int len = length(Head);
    if (pos < 1 || pos > len)
    {
    cout << "Invalid position\n";
    return;
    }
    else if(pos == 1)
    {
        Node*temp = Head;
        Head = temp->next;
        delete temp;
    }
    else if(pos == len)
    {
        Node *temp1 = Tail;
        Node *H = Head;
        while(H->next->next != NULL)
        {
            H = H->next;
        }
        H->next = NULL;
        Tail = H;
        delete temp1;
       
    }
    else{

        int deletepoint =0;
        Node*Temp = Head;
        while(deletepoint != pos-2)
        {
            Temp = Temp->next;
            deletepoint++;
        }
        Node* del = Temp->next;
        Temp->next = del->next;
        delete del;
       
    }
}
Node* middle(Node* Head,Node*Tail)
{
    int len  = length(Head);
    int mid = len/2;
    int curr =0;

    while(curr != mid)
    {
        Head = Head->next;
        curr++;
    }
    return Head;
}

Node* fast_and_slow(Node*Head,Node*Tail)
{
    Node*slow = Head;
    Node*fast = Head;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main()
{
    Node* Head = NULL;
    Node* Tail = NULL;

    insertAthead(10,Head,Tail);
    insertAthead(12,Head,Tail);
    insertAthead(13,Head,Tail);
    insertAtTail(1,Head,Tail);
    insertAthead(19,Head,Tail);
    insertAthead(9,Head,Tail);
    insertAthead(1679,Head,Tail);    
    Travel(Head);
    Node* ans = fast_and_slow(Head,Tail);
    cout<<ans->data<<endl;
    return 0;
}