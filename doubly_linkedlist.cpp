#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *previous;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->previous = NULL;
        this->next = NULL;
    }
};
// traversing a doubly linked list
void printnode(node *&head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// finding the length of a linked list
int getlength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    // cout << endl;
    return len;
}

// insert at head function
void insertathead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->previous = temp;
    head = temp;
}

// insert at tail function in doubly linked list//
void insertattail(node*&tail , int data){
    node*temp =  new node(data);
        tail ->next = temp;
        temp ->previous = tail;
        tail = temp ;
};
// insert at a position in doubly linked list
void insertatposition(node*&tail,node*&head, int position, int d){
    node*temp =  new node(d);
    if(position == 1){
        insertathead(head ,d);
        return;
    }
    node*temp = head;
    int cnt = 1;
    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next =  NULL){
        insertattail(tail,d);
        return ;
    }
    //creating a node for d//
    node*nodetoinsert =  new node(d);
    nodetoinsert->next = temp ->next;
    temp->next = nodetoinsert;
    
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node*tail =  node1;
    printnode(head);
    cout << getlength(head) << endl;
    insertathead(head, 12);
    printnode(head);
    insertathead(head, 11);
    printnode(head);
    insertathead(head, 10);
    printnode(head);
    insertattail(tail, 23);
    printnode(head);
    return 0;
}