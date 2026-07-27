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
Node* middle(Node*head,Node*tail)
{
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast != NULL && fast->next != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}
void reverse(Node* &head)
{
	//empty LL
	if(head == NULL) {
		return;
	}
	//se4tting up prev and curr
	Node* prev = NULL;
	Node* curr = head;

	//updating links
	while(curr != NULL) {
		Node* forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = forward;
	}
	//update head
	head = prev;
}
bool check_palindrome(Node* Head,Node* Tail)
{
    int len = length(Head);
    Node*mid = middle(Head,Tail);
    
    Node* finalMid = NULL;
    if(len&1)
    {
        finalMid = mid->next;
    }else{
        finalMid = mid;
    }

    reverse(finalMid);
	Node* temp = Head;
	while(temp != NULL && finalMid != NULL) {
		if(temp->data != finalMid -> data) {
			return false;
		}
		//1 stp aage badhao
		temp = temp->next;
		finalMid = finalMid -> next;
	}
    return true;
}
int main()
{
    Node* Head = NULL;
    Node* Tail = NULL;

    insertAthead(1,Head,Tail);
    insertAthead(2,Head,Tail);
    insertAthead(3,Head,Tail);
    insertAthead(2,Head,Tail);
    insertAthead(1,Head,Tail);
    // insertAthead(0,Head,Tail);
    Travel(Head);
    cout<<check_palindrome(Head,Tail);


    return 0;
}