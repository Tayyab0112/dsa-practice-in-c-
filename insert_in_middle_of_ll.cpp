#include <iostream>
using namespace std;
class node
{// NODE IPLEMENTATION
public:
    int data;
    node *next;

    // constructor
    node( int data){
        this -> data =  data;
        this -> next =  NULL ;
    }
};

// insert at head
void insert(node *& head , int d){
    node *temp  = new node(d);
    temp -> next  = head;
    head  =  temp ;


};
// print func of a linke list
void print(node *& head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp  =  temp ->next;
    }

// insrt at a particlar postion in linked list

};
void insertatposition(node * &head, int position, int data) {
    node *temp =  head;
    int cnt = 1;
    while(cnt<position -1){
        temp = temp ->next;
        cnt ++;
    }cout<<endl;
    // creating a node for data
    node * nodetoinsert = new node(data);
    nodetoinsert -> next = temp->next;
    temp->next = nodetoinsert;
};

int main()
{
    // DYNAMIC ALLOCATION IN THE FORM OF HEAP
    node * newNode = new node(10);
    cout<<newNode -> data<<endl;
    cout<<newNode -> next <<endl;
    
    node *head  = newNode;
    node* tail =  newNode;



    print(head);
    insert(head,12);
    cout<<endl;
    print(head);
    cout<<endl;
    insert(head,15);
    
    print(head)    ;
    cout<<endl;
    insertatposition(head, 3,11);
    print(head);
    return 0;
    
}