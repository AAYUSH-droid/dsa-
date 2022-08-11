#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    //constructor in linked list
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node()
    {
        int value = this -> data;

        //memory free
        if(this->next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d)
{

    //1)new node create
    Node *temp = new Node(d);

    //2)Null pointer of new node created above usko hatake head ko point krwaao
    temp->next = head;

    //3)head of prevv node ko hatake temp node pe point krwade
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    //1)new node create
    Node *temp = new Node(d);

    tail->next = temp;

    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{   
    //insert at start position
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    //insert at end position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }

    //creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}


//deletion of a position
void deleteNode(int position , Node* &head)
{   
    //deleting first node or start node
    if(position == 1)
    {   
        Node* temp = head;
        head = head -> next;

        //memory free
        temp -> next = NULL;
        delete temp;
    }

    //deleting any middle node or last node
    else{
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt = 1;
        while(cnt < position)
        {
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
        prev ->next = curr ->next;
        curr -> next = NULL;
        delete curr;
    }
}



int main()
{
    //created a new node
    Node *node1 = new Node(10);

    //cout << node1->data << endl;

    //head pointed to new node1
    //cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;

    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail, head, 4, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;


    deleteNode(4,head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}