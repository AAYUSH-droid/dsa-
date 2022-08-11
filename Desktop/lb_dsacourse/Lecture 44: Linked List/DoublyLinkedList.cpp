#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    //constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

//traversing a doubly linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

//gives lenght of linked list
int getLen(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
};

void insertAthead(Node *&tail, Node *&head, int d)
{ //if empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
};

void insertAttail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
};

void insertAtposition(Node *&tail, Node *&head, int position, int d)
{
    //insert at start position
    if (position == 1)
    {
        insertAthead(tail, head, d);
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
        insertAttail(tail, head, d);
        return;
    }

    //creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
};

//deletion of a position
void deleteNode(int position, Node *&head)
{
    //deleting first node or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    //deleting any middle node or last node
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{

    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    // print(head);
    // cout << getLen(head) << endl;

    insertAthead(tail, head, 11);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    insertAthead(tail, head, 13);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    insertAthead(tail, head, 8);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    insertAttail(tail, head, 25);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    insertAtposition(tail, head, 4, 99);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    insertAtposition(tail, head, 1, 101);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    insertAtposition(tail, head, 7, 1001);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(1, head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    //  deleteNode(6,head);
    // print(head);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;

    return 0;
}