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
    //destructor
    ~node(){
        int value = this->data;
        //memory is free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for node with data "<<value <<endl;
    }
    };
void deletenode(int position, node*&head){
    //dleleting first or start node
    if(position = 1){
        node*temp = head;
        head = head->next ;
        delete temp;
        // memory free
    }
    else{
    //delelting any middle element 
    node*curr = head;
    node*prev = head;
    //memory free kre pr last node

    int cnt = 1;
    while(cnt<=position){
        prev = curr;
        curr = curr->next;
        cnt ++;

    }
    prev->next = curr ->next;
    delete curr;
        } 
}

// insert at head func :-
void insert(node *& head , int d){
    node *temp  = new node(d);
    temp -> next  = head;
    head  =  temp ;


};

// isnert at tail func
void insertattail(node *& tail, int d){
    node *temp  = new node(d);
    tail ->next = temp ;
    tail =temp;
}

void print(node *& head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp  =  temp ->next;
    }
}
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
    insertattail(tail, 9);
    print(tail);
    return 0;
}