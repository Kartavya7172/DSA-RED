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
 Node* insertatTail(Node* &toInsert,Node* &Head,Node* &Tail)
    {
        if(Head == NULL && Tail == NULL)
        {
            Head = toInsert;
            Tail = toInsert;
        }
        else{
            Tail->next = toInsert;
            Tail = toInsert;
        }
    }
    Node* segregate(Node* head) {
        // code here
        Node* zeroHead = NULL;
        Node* zeroTail = NULL;
        
        Node* oneHead = NULL;
        Node* oneTail = NULL;
        
        Node* twoHead = NULL;
        Node* twoTail = NULL;
    
        Node* temp = head;
        while(temp != NULL)
        {
            Node* toInsert = temp;
            temp = temp->next;
            toInsert->next = NULL;
            
            if(toInsert->data == 0)
            {
                insertatTail(toInsert,zeroHead,zeroTail);
            }
            else if(toInsert->data == 1)
            {
                insertatTail(toInsert,oneHead,oneTail);
            }
            if(toInsert->data == 2)
            {
                insertatTail(toInsert,twoHead,twoTail);
            }
        }
        if(zeroHead != NULL)
        {
            if(oneHead != NULL)
            {
                zeroTail->next = oneHead;
                oneTail->next = twoHead;
                return zeroHead;
            }
            else{
                zeroTail->next = twoHead;
                return zeroHead;
            }
        }else{
            if(oneHead != NULL)
            {
                oneTail->next = twoHead;
                return oneHead;
            }else{
                return twoHead;
            }
            
        }
        
}
int main()
{
    Node* Head = NULL;
    Node* Tail = NULL;
    insertAtHead(2,Head,Tail);
    insertAtHead(1,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(0,Head,Tail);
    insertAtHead(2,Head,Tail);
    insertAtHead(2,Head,Tail);
    Node* temptravel = segregate(Head);
    traversal(temptravel);
}