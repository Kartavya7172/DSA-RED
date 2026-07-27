#include<iostream>
using namespace std;

class Node{
    public:
    Node * prev;
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAthead(int val,Node* &head,Node* &tail)
{
    if(head == NULL && tail == NULL)
    {
        Node *newnode = new Node(val);
        head = newnode;
        tail = newnode;
    }
    else{
        Node *newnode = new Node(val);
        newnode->next = head;
        newnode->prev = NULL;
        head->prev = newnode;
        head = newnode;
    }
}
void insertAttail(int val,Node* &Head,Node* &Tail)
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
        newnode->prev = Tail;
        newnode->next = NULL;
        Tail = newnode;
    }
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
    if(pos<1 || pos>len+1)
    {
        cout<<"Invalid Postion"<<endl;
    }
    else if(pos == 1)
    {
        insertAthead(val,Head,Tail);
        
    }
    else if(pos == len+1)
    {
        insertAttail(val,Head,Tail);
  
    }
    else{
        
        int insertpoint = 0;
        Node*temp = Head;
        while(insertpoint != pos-2)
        {
            temp=temp->next;
            insertpoint++;
        }
        Node *newnode = new Node(val);
        Node *nextone = temp->next;
        nextone->prev = newnode;
        newnode->next = nextone;
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void search(int value,Node * &Head)
{
    Node* temp = Head;
    while(temp != NULL)
    {
        if(temp->data == value)
        {
            cout<<"The target is presrent in the linked list"<<endl;
            return;
        }
        temp = temp->next;
    }
    cout<<"The target is not presrent in the linked list"<<endl;
}
void travel(Node* &Head)
{
    Node *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAtpos(int pos,Node* &Head,Node* &Tail)
{
    if(Head == NULL && Tail == NULL)
    {
        cout<<"Linked List is empty"<<endl;
        return;
    }
    int len = length(Head);

    if(pos<1 || pos>len)
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    else if(Head == Tail){
        Node *d = Head;
        Head = NULL;
        Tail = NULL;
        delete d;
    }
    else if(pos == 1)
    {
        Node* todel = Head;
        Head = Head->next;
        Head->prev = NULL;
        todel->next = NULL;
        todel->prev = NULL;
        delete todel;
    }
    else if(pos == len)
   {
    Node* todel = Tail;
    Tail = Tail->prev;
    Tail->next = NULL;
    delete todel;
   }
    else{
        Node*temp = Head;
        int to_delete = 0; 
        while(to_delete != pos-1)
        {
            temp = temp->next;
            to_delete++;
        }
        Node *join = temp->next;
        Node* back = temp->prev;
        back->next = join;
        join->prev = back;
        temp->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
}
int main()
{
    Node *Head = NULL;
    Node *Tail = NULL;
    insertAthead(7,Head,Tail);
    insertAthead(6,Head,Tail);
    insertAthead(5,Head,Tail);
    insertAthead(4,Head,Tail);
    insertAthead(3,Head,Tail);
    insertAthead(2,Head,Tail);
    insertAthead(1,Head,Tail);
    insertAttail(8,Head,Tail);
    insertAtpos(0,4,Head,Tail);
    // deleteAtpos(1,Head,Tail);
    deleteAtpos(3,Head,Tail);
    travel(Head);
    // search(7,Head);

    return 0;
}